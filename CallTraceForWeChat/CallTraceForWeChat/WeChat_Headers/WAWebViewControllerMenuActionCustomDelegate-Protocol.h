//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAWebViewController;

@protocol WAWebViewControllerMenuActionCustomDelegate <NSObject>
- (_Bool)webViewControllerMenuMustNotShowADMenuItem:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustNotHandleMenuShowOrDismiss:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustShowGoHomeInWeApp:(WAWebViewController *)arg1;
- (_Bool)webViewControllerMenuMustNotShare:(WAWebViewController *)arg1;
@end
