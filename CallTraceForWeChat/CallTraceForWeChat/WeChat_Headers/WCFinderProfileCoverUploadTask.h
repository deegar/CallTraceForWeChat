//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderProfileCoverUploadTask : NSObject
{
    NSString *_mediaUrl;
    NSString *_mediaMd5;
    NSString *_clientID;
    NSString *_uploadMediaLocalURL;
}

@property(copy, nonatomic) NSString *uploadMediaLocalURL; // @synthesize uploadMediaLocalURL=_uploadMediaLocalURL;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSString *mediaMd5; // @synthesize mediaMd5=_mediaMd5;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
- (void).cxx_destruct;

@end
