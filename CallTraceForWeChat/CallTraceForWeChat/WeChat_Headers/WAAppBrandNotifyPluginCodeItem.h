//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAAppBrandNotifyPluginCodeItem : NSObject <PBCoding>
{
    unsigned int version;
    NSString *provider;
    NSString *md5;
}

+ (void)initialize;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_provider;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSString *provider; // @synthesize provider;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

