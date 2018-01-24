//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"
#import "NTTodayItem.h"

@class NSDate, NSObject<NTHeadlineAdElement>, NSObject<NTHeadlineAnalyticsElementProviding>, NSObject<NTHeadlineBackingElement>, NSObject<NTHeadlinePersonalizationMetadata>, NSString, NSURL, SFSearchResult;

@protocol NTHeadlineProviding <NSObject, NFCopying, NSSecureCoding, NTTodayItem>
@property(readonly, copy, nonatomic) NSURL *videoCallToActionURL;
@property(readonly, copy, nonatomic) NSString *videoCallToActionTitle;
@property(readonly, copy, nonatomic) NSURL *flintDocumentURL;
@property(readonly, copy, nonatomic) NSObject<NTHeadlineBackingElement> *backingElement;
@property(readonly, copy, nonatomic) NSObject<NTHeadlinePersonalizationMetadata> *personalizationMetadata;
@property(readonly, copy, nonatomic) NSObject<NTHeadlineAdElement> *adElement;
@property(readonly, copy, nonatomic) NSObject<NTHeadlineAnalyticsElementProviding> *analyticsElement;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property(readonly, nonatomic) _Bool supportsSavingForLater;
@property(readonly, nonatomic) _Bool displaysWithLeadingCellAppearance;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, copy, nonatomic) NSURL *videoURL;
@property(readonly, copy, nonatomic) SFSearchResult *searchResult;
@property(readonly, copy, nonatomic) NSString *storyType;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSURL *NewsURL;
@property(readonly, copy, nonatomic) NSURL *webURL;
@property(readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property(readonly, nonatomic) unsigned long long thumbnailSizePreset;
@property(readonly, copy, nonatomic) NSURL *thumbnailRemoteURL;
@property(readonly, copy, nonatomic) NSURL *compactSourceNameImageRemoteURL;
@property(readonly, nonatomic) double sourceNameImageScale;
@property(readonly, copy, nonatomic) NSURL *sourceNameImageRemoteURL;
@property(readonly, copy, nonatomic) NSString *sourceTagID;
@property(readonly, copy, nonatomic) NSString *compactSourceName;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, copy, nonatomic) NSDate *ageDisplayDate;
@property(readonly, copy, nonatomic) NSString *shortExcerpt;
@property(readonly, copy, nonatomic) NSString *titleCompact;
@property(readonly, copy, nonatomic) NSString *title;
@end

