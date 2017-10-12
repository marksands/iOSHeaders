//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSKnownKeysDictionary, NSMutableDictionary, NSString;

@interface PLPTPInfoBuilder : NSObject
{
    id <PLPTPTransferableAsset> _asset;
    id <PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    NSKnownKeysDictionary *_info;
    NSMutableDictionary *_relatedFilesMetadata;
}

+ (id)pictureTransferProtocolInformationForAsset:(id)arg1 asFirstAsset:(_Bool)arg2;
+ (id)_ptpCalendar;
- (void).cxx_destruct;
- (void)_buildEvent;
- (_Bool)_buildAdjustmentRelatedFile:(id)arg1;
- (_Bool)_buildDiagnosticRelatedFile:(id)arg1;
- (_Bool)_buildSidecarRelatedFiles:(id)arg1;
- (void)_buildRelatedFiles;
- (void)_buildTimelapse;
- (void)_buildSlowMo;
- (void)_buildBurst;
- (void)_buildGPSInformation;
- (void)_durationOfTheAsset;
- (void)_buildModificationAndCreationDate;
- (void)_buildPhotoKey;
- (void)_buildOrientation;
- (void)_buildThumbnailDimensions;
- (void)_buildImageDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildOriginatingAssetID;
- (void)_buildFileSize;
- (void)_buildExifAvailable;
- (void)_buildCloudPhotosEnabledWithFirstAsset:(_Bool)arg1;
- (_Bool)_buildDirectoryPathAndFilename;
- (_Bool)_suppressPtpInfo;
- (id)pictureTransferProtocolInformationAsFirstAsset:(_Bool)arg1;
- (id)initWithAsset:(id)arg1 fileManager:(id)arg2;
- (id)initWithAsset:(id)arg1;

@end
