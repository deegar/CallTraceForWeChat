//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString, WCFinderComment;

@interface WCFinderCommentCGI : WCFinderBaseCgi
{
    WCFinderComment *_comment;
    NSString *_replayUserName;
    unsigned long long _objectID;
    unsigned long long _rootCommentID;
    NSString *_username;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _scene;
    NSString *_nonceID;
}

@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *replayUserName; // @synthesize replayUserName=_replayUserName;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createPostRequest;
- (id)initCommentCGIWith:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;

@end
