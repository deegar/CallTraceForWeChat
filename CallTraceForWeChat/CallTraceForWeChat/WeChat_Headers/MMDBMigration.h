//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MMDBMigration : NSObject
{
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_brandUserNames;
    NSArray *_userNames;
}

@property(retain, nonatomic) NSArray *userNames; // @synthesize userNames=_userNames;
@property(retain, nonatomic) NSMutableSet *brandUserNames; // @synthesize brandUserNames=_brandUserNames;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)init;

@end
