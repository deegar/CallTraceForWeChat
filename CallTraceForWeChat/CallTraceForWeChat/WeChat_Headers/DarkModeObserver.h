//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCMainWindowExt-Protocol.h"

@class NSString;

@interface DarkModeObserver : NSObject <WCMainWindowExt>
{
    CDUnknownBlockType _block;
}

+ (id)observerWithCallback:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)mm_onColorAppearanceDidChange;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

