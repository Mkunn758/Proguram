using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterControllr : MonoBehaviour
{
    public float speed;           // 移動速度
    public float jumpPower;       // ジャンプ力

    public Rigidbody rb;         // Rigidbody コンポーネント
    private bool jumpFlag;       // ジャンプフラグ

    // Start is called before the first frame update
    void Start()
    {
        // Rigidbody コンポーネントを取得
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // 前進と後退の移動ベクトル
        Vector3 vec1 = speed * Vector3.forward * Time.deltaTime;
        // 左右の移動ベクトル
        Vector3 vec2 = speed * Vector3.right * Time.deltaTime;

        // キーボードの入力による移動処理
        if (Input.GetKey(KeyCode.W))
        {
            transform.Translate(vec1);
        }
        if (Input.GetKey(KeyCode.S))
        {
            transform.Translate(-vec1);
        }
        if (Input.GetKey(KeyCode.D))
        {
            transform.Translate(vec2);
        }
        if (Input.GetKey(KeyCode.A))
        {
            transform.Translate(-vec2);
        }

        // ジャンプ処理
        if (jumpFlag == true) return;  // ジャンプ中は処理を行わない
        if (Input.GetKeyDown(KeyCode.Space))
        {
            rb.AddForce(transform.up * jumpPower, ForceMode.Impulse);
            jumpFlag = true;           // ジャンプフラグを立てる
        }
    }

    // 衝突判定
    private void OnCollisionEnter(Collision other)
    {
        if (jumpFlag == true)
        {
            if (other.gameObject.CompareTag("Ground"))
            {
                jumpFlag = false;     // ジャンプフラグを解除する
            }
        }
    }
}
