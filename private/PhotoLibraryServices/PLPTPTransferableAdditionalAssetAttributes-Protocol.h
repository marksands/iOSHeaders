//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>
@property(readonly, nonatomic) long long ptpTrashedState;
@property(readonly, retain, nonatomic) NSString *exifTimestampString;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property(readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@end

