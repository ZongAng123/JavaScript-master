//
//  ViewController.h
//  JavaScript-master
//
//  Created by 纵昂 on 2017/2/18.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
//导入JavaScript框架
#import <JavaScriptCore/JavaScriptCore.h>

@protocol JSObjcDelegate <JSExport>
- (void)call;
- (void)getCall:(NSString *)callString;

@end
@interface ViewController : UIViewController<UIWebViewDelegate,JSObjcDelegate>

@property (nonatomic, strong) JSContext *jsContext;
@property (strong, nonatomic)  UIWebView *webView;

@end

