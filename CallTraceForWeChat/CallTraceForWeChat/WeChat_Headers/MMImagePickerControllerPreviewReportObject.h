//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMImagePickerReportInfo;

@interface MMImagePickerControllerPreviewReportObject : MMObject
{
    unsigned int m_previewCount;
    MMImagePickerReportInfo *_reportInfo;
}

@property(retain, nonatomic) MMImagePickerReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) unsigned int m_previewCount; // @synthesize m_previewCount;
- (void).cxx_destruct;
- (void)reportPickerActionInfo;
- (void)reportPicerReportInfo;
- (void)increasePreviewCount;
- (void)reportPreviewWithScene:(int)arg1;

@end
