//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"

@class ImageTranslateRequest, NSString;

@interface ImageTranslateService : MMService <MMServiceProtocol>
{
    struct WordDetect *_detectEngine;
    ImageTranslateRequest *_currentRequest;
}

+ (void)reportIDKey:(long long)arg1 value:(unsigned int)arg2;
@property(retain, nonatomic) ImageTranslateRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) struct WordDetect *detectEngine; // @synthesize detectEngine=_detectEngine;
- (void).cxx_destruct;
- (void)clearCurrentRequest;
- (void)translateImage:(id)arg1 statInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDetectWordDebugInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)detectImage:(id)arg1;
- (void)asyncDetectWord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)isPicTranslationSupportUserLanguage;
- (_Bool)isPicTranslationAvaliable:(unsigned int)arg1;
- (_Bool)checkWordDetectSwitch:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

