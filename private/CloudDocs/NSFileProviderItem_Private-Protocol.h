//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/NSFileProviderItem-Protocol.h>

@class NSNumber, NSString, NSURL;

@protocol NSFileProviderItem_Private <NSFileProviderItem>

@optional
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSString *fp_domainIdentifier;
@property(readonly) NSString *fp_spotlightDomainIdentifier;
@property(readonly) NSString *sharingPermissions;
@property(readonly) NSString *providerIdentifier;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly, copy) NSURL *fileURL;
@end

