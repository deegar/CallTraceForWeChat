//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol WCRedEnvGetPacketStoryCgiDelegate;

@interface WCRedEnvGetPacketStoryCgi : WCPayBaseCgi
{
    id <WCRedEnvGetPacketStoryCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCRedEnvGetPacketStoryCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void).cxx_destruct;
- (id)getLocalStoryInfo:(id)arg1;
- (void)saveStoryInfo:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didGetLocalResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
