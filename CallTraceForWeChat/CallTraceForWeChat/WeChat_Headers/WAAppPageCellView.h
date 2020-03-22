//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAppMessageBaseCellView.h"

#import "IMsgExt-Protocol.h"
#import "IWAUpdatableMsgMgrExt-Protocol.h"
#import "WAAppPageSystemMsgViewDelegate-Protocol.h"

@class DotLabelView, MMUIImageView, MMUILabel, MMWebImageView, NSString, UIImageView, WAAppPageSystemMsgView, WAAppPageViewModel, YYAsyncImageView;

@interface WAAppPageCellView : WAAppMessageBaseCellView <IMsgExt, IWAUpdatableMsgMgrExt, WAAppPageSystemMsgViewDelegate>
{
    _Bool _isUpdatingContentLabel;
    _Bool _isVisible;
    MMWebImageView *_appLogoView;
    MMUILabel *_appNameLabel;
    UIImageView *_defaultLogo;
    YYAsyncImageView *_imageView;
    MMUILabel *_titleLabel;
    DotLabelView *_updatableContentLabel;
    WAAppPageSystemMsgView *_systemMsgView;
    MMUIImageView *_guaranteeImageView;
}

@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) MMUIImageView *guaranteeImageView; // @synthesize guaranteeImageView=_guaranteeImageView;
@property(nonatomic) _Bool isUpdatingContentLabel; // @synthesize isUpdatingContentLabel=_isUpdatingContentLabel;
@property(retain, nonatomic) WAAppPageSystemMsgView *systemMsgView; // @synthesize systemMsgView=_systemMsgView;
@property(retain, nonatomic) DotLabelView *updatableContentLabel; // @synthesize updatableContentLabel=_updatableContentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YYAsyncImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *defaultLogo; // @synthesize defaultLogo=_defaultLogo;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
- (void).cxx_destruct;
- (id)fontOfSystemMsg;
- (void)onLinkClicked;
- (void)retryWithShareKey:(id)arg1;
- (void)fillUpdatableMsgContent;
- (void)scheduleUpdateWithLatestMsgInfo:(id)arg1;
- (void)tryUpdateUpdatableMsgInfo;
- (void)onUpdatableMsgInfoUpdated:(id)arg1 info:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;
- (void)layoutInternal;
- (void)initSystemMsgView;
- (void)initPageImageView;
- (void)initUpdatableContentView;
- (void)initTitleView;
- (void)initGuaranteeImageView;
- (void)initHeaderView;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WAAppPageViewModel *viewModel; // @dynamic viewModel;

@end
