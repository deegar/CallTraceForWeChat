//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, PublishUGCToGameCenterRequest_VideoInfo;

@interface PublishUGCToGameCenterRequest_BusinessInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *battleId; // @dynamic battleId;
@property(nonatomic) unsigned int controlFlag; // @dynamic controlFlag;
@property(retain, nonatomic) NSString *gameAppid; // @dynamic gameAppid;
@property(retain, nonatomic) NSMutableArray *gameOpenidList; // @dynamic gameOpenidList;
@property(retain, nonatomic) NSMutableArray *groupOpenidList; // @dynamic groupOpenidList;
@property(retain, nonatomic) NSString *originalVid; // @dynamic originalVid;
@property(retain, nonatomic) NSMutableArray *picList; // @dynamic picList;
@property(retain, nonatomic) NSMutableArray *picMetaList; // @dynamic picMetaList;
@property(nonatomic) unsigned int testFlag; // @dynamic testFlag;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int videoDuration; // @dynamic videoDuration;
@property(nonatomic) unsigned int videoHeight; // @dynamic videoHeight;
@property(retain, nonatomic) PublishUGCToGameCenterRequest_VideoInfo *videoInfo; // @dynamic videoInfo;
@property(nonatomic) unsigned int videoWidth; // @dynamic videoWidth;

@end

