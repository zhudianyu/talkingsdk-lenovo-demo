package com.talkingsdk.lenovosdkdemo;

import java.util.Map;

import org.json.JSONObject;

import android.util.Log;

import com.talkingsdk.MainApplication;
import com.talkingsdk.models.LoginData;
import com.talkingsdk.models.PayData;
import com.talkingsdk.lenovo.SdkObject;

public class GameSdkObject extends SdkObject {

    private static final String TAG = "GameSdkObject";

    @Override
    public void onLoginedRequest(LoginData lg, int code) {
        Log.i(TAG, lg.getUsername());
    }

    @Override
    public void onPaidRequest(PayData payData, int code) {
        Log.i(TAG, "payData");
    }

    @Override
    public void onLogoutRequest(int code) {
    }
    
}
