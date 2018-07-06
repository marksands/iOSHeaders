//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHImportDuplicateCheckerItem.h"

@class AVAssetImageGenerator, IPAMetadata, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL, PHImportSource;

@interface PHImportAsset : NSObject <PHImportDuplicateCheckerItem>
{
    PHImportSource *_source;
    PHImportSource *_strongSource;
    struct os_unfair_lock_s _metadataLock;
    _Bool _isImage;
    unsigned char _duplicateStateConfidence;
    _Bool _isJPEG;
    _Bool _isRAW;
    _Bool _isTIFF;
    _Bool _isHEIF;
    _Bool _isMovie;
    _Bool _isAudio;
    _Bool _isRelated;
    _Bool _canReference;
    _Bool _isDuplicate;
    _Bool _treatAsUnsupportedRAW;
    _Bool _sidecarsLoaded;
    unsigned char _fileLocation;
    id _uuid;
    IPAMetadata *_metadata;
    PHImportAsset *_rawAsset;
    PHImportAsset *_videoComplement;
    PHImportAsset *_largeRender;
    PHImportAsset *_audioAsset;
    NSMutableArray *_relatedBurstAssets;
    PHImportAsset *_burstPick;
    id _avchdAssetId;
    id _assetId;
    NSMutableDictionary *_duplicates;
    NSDate *_lastDuplicateCheck;
    NSURL *_url;
    NSString *_uti;
    NSString *_fileName;
    NSString *_createdFileName;
    unsigned long long _fileSize;
    NSString *_fileExtension;
    NSDictionary *_assetProperties;
    NSURL *_rawURL;
    NSDictionary *_rawAssetProperties;
    NSURL *_videoComplementURL;
    NSDictionary *_videoComplementAssetProperties;
    NSURL *_largeRenderURL;
    NSDictionary *_largeRenderAssetProperties;
    PHImportAsset *_thumbnailRender;
    NSURL *_thumbnailRenderURL;
    NSDictionary *_thumbnailRenderAssetProperties;
    PHImportAsset *_miniRender;
    NSURL *_miniRenderURL;
    NSURL *_audioAssetURL;
    id _sourceAssetIndetifier;
    NSDate *_fileCreationDate;
    NSDate *_fileModificationDate;
    NSSet *_duplicateAssets;
    AVAssetImageGenerator *_imageGenerator;
    NSMutableDictionary *_sidecarAssetsOfType;
    NSObject<OS_dispatch_queue> *_loadSidecars;
    NSDate *_exifImageDate;
    unsigned long long _copyMethod;
    NSData *_fileData;
    long long _resourceType;
    struct CGSize _thumbnailSize;
    struct CGSize _imageSize;
}

+ (void)determineIfTIFFIsRAW:(id)arg1 url:(id)arg2;
+ (id)loadDatesForAssets:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
+ (_Bool)isSidecarType:(id)arg1;
+ (_Bool)isImage:(id)arg1;
+ (_Bool)isMovie:(id)arg1;
+ (_Bool)isAudio:(id)arg1;
+ (_Bool)isHeifUTI:(id)arg1;
+ (_Bool)isTiffUTI:(id)arg1;
+ (_Bool)isRawUTI:(id)arg1;
+ (_Bool)isJpegUTI:(id)arg1;
+ (_Bool)isImageUTI:(id)arg1;
+ (_Bool)isMovieUTI:(id)arg1;
+ (_Bool)isAudioUTI:(id)arg1;
+ (void)logImageDateFileDateDifferencesForAsset:(id)arg1;
+ (id)assetFileForURL:(id)arg1;
+ (unsigned char)isSupportedFile:(id)arg1 uti:(id)arg2;
+ (id)supportedTypes;
+ (id)supportedImageTypes;
+ (id)supportedAudioTypes;
+ (id)supportedMovieTypes;
+ (_Bool)conformsToUTTypes:(id)arg1 forExtention:(id)arg2;
+ (_Bool)uti:(id)arg1 conformsToUTTypes:(id)arg2;
@property(nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) __weak PHImportSource *source; // @synthesize source=_source;
@property(nonatomic) unsigned char fileLocation; // @synthesize fileLocation=_fileLocation;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) unsigned long long copyMethod; // @synthesize copyMethod=_copyMethod;
@property(retain, nonatomic) NSDate *exifImageDate; // @synthesize exifImageDate=_exifImageDate;
@property(nonatomic) _Bool sidecarsLoaded; // @synthesize sidecarsLoaded=_sidecarsLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadSidecars; // @synthesize loadSidecars=_loadSidecars;
@property(retain, nonatomic) NSMutableDictionary *sidecarAssetsOfType; // @synthesize sidecarAssetsOfType=_sidecarAssetsOfType;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool treatAsUnsupportedRAW; // @synthesize treatAsUnsupportedRAW=_treatAsUnsupportedRAW;
@property(readonly, nonatomic) NSSet *duplicateAssets; // @synthesize duplicateAssets=_duplicateAssets;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) NSDate *fileModificationDate; // @synthesize fileModificationDate=_fileModificationDate;
@property(retain, nonatomic) NSDate *fileCreationDate; // @synthesize fileCreationDate=_fileCreationDate;
@property(retain, nonatomic) id sourceAssetIndetifier; // @synthesize sourceAssetIndetifier=_sourceAssetIndetifier;
@property(retain, nonatomic) NSURL *audioAssetURL; // @synthesize audioAssetURL=_audioAssetURL;
@property(retain, nonatomic) NSURL *miniRenderURL; // @synthesize miniRenderURL=_miniRenderURL;
@property(retain, nonatomic) PHImportAsset *miniRender; // @synthesize miniRender=_miniRender;
@property(retain, nonatomic) NSDictionary *thumbnailRenderAssetProperties; // @synthesize thumbnailRenderAssetProperties=_thumbnailRenderAssetProperties;
@property(retain, nonatomic) NSURL *thumbnailRenderURL; // @synthesize thumbnailRenderURL=_thumbnailRenderURL;
@property(retain, nonatomic) PHImportAsset *thumbnailRender; // @synthesize thumbnailRender=_thumbnailRender;
@property(retain, nonatomic) NSDictionary *largeRenderAssetProperties; // @synthesize largeRenderAssetProperties=_largeRenderAssetProperties;
@property(retain, nonatomic) NSURL *largeRenderURL; // @synthesize largeRenderURL=_largeRenderURL;
@property(retain, nonatomic) NSDictionary *videoComplementAssetProperties; // @synthesize videoComplementAssetProperties=_videoComplementAssetProperties;
@property(retain, nonatomic) NSURL *videoComplementURL; // @synthesize videoComplementURL=_videoComplementURL;
@property(retain, nonatomic) NSDictionary *rawAssetProperties; // @synthesize rawAssetProperties=_rawAssetProperties;
@property(retain, nonatomic) NSURL *rawURL; // @synthesize rawURL=_rawURL;
@property(retain, nonatomic) NSDictionary *assetProperties; // @synthesize assetProperties=_assetProperties;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *createdFileName; // @synthesize createdFileName=_createdFileName;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain) NSDate *lastDuplicateCheck; // @synthesize lastDuplicateCheck=_lastDuplicateCheck;
@property(retain) NSMutableDictionary *duplicates; // @synthesize duplicates=_duplicates;
@property _Bool isDuplicate; // @synthesize isDuplicate=_isDuplicate;
@property(readonly) id assetId; // @synthesize assetId=_assetId;
@property(readonly) id avchdAssetId; // @synthesize avchdAssetId=_avchdAssetId;
@property(retain, nonatomic) PHImportAsset *burstPick; // @synthesize burstPick=_burstPick;
@property(retain, nonatomic) NSMutableArray *relatedBurstAssets; // @synthesize relatedBurstAssets=_relatedBurstAssets;
@property(readonly, nonatomic) _Bool isHEIF; // @synthesize isHEIF=_isHEIF;
@property unsigned char duplicateStateConfidence; // @synthesize duplicateStateConfidence=_duplicateStateConfidence;
@property(readonly, nonatomic) id uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)duplicateAssetsForLibrary:(id)arg1;
- (void)setDuplicates:(id)arg1 forLibrary:(id)arg2;
@property(readonly) id sizeKey;
@property(readonly) NSDate *dateKey;
@property(readonly) id nameKey;
- (id)timezoneCorrectedExifImageDate;
@property(readonly) id originatingAssetID;
- (void)downloadToPathAsync:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addRelatedRecordsToRecord:(id)arg1 primaryRecord:(id)arg2;
- (id)importRecordForPrimaryAsset;
- (id)sidecarInfoDictionaries;
- (id)sidecarInfoDictionary;
- (id)resourceTypes;
- (_Bool)hasOriginalResourceType;
- (id)validateMetadataForImportRecord:(id)arg1;
- (_Bool)isBlessed:(id)arg1 includeXmp:(_Bool)arg2;
- (_Bool)isValidMetadata:(id)arg1;
- (struct CGImage *)avThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id *)arg3;
- (struct CGImage *)imageThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id *)arg3;
- (struct CGImage *)removeBlackBarsFromExifThumbnail:(struct CGImage *)arg1 fullSize:(struct CGSize)arg2;
- (struct CGSize)cropEXIFThumbSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
- (void)thumbnailUsingRequest:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
- (id)thumbnailForSize:(unsigned long long)arg1 priority:(unsigned char)arg2 atEnd:(CDUnknownBlockType)arg3;
- (id)thumbnailForSize:(unsigned long long)arg1 atEnd:(CDUnknownBlockType)arg2;
- (void)_setMetadata:(id)arg1;
@property(retain, nonatomic) IPAMetadata *metadata; // @synthesize metadata=_metadata;
- (void)loadMetadataAsync:(CDUnknownBlockType)arg1;
- (void)loadMetadataSync;
- (void)informDelegateOfAssetUpdates;
- (void)addBurstAsset:(id)arg1;
@property(retain, nonatomic) PHImportAsset *audioAsset; // @synthesize audioAsset=_audioAsset;
@property(retain, nonatomic) PHImportAsset *largeRender; // @synthesize largeRender=_largeRender;
@property(retain, nonatomic) PHImportAsset *videoComplement; // @synthesize videoComplement=_videoComplement;
@property(retain, nonatomic) PHImportAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
- (_Bool)isAppropriateForUI;
- (id)xmpSidecar;
- (id)aaeSidecar;
- (id)slmSidecar;
- (void)removeSidecarAsset:(id)arg1;
- (void)addSidecarAsset:(id)arg1;
- (unsigned long long)sidecarAssetBytes;
@property(readonly, nonatomic) NSArray *sidecarAssets;
- (void)_loadSidecarFiles;
- (void)loadSidecarFiles;
- (id)checkForSidecarWithExtension:(id)arg1;
- (id)sidecarAssetAtPath:(id)arg1;
- (unsigned long long)relatedBytes;
- (id)relatedAssets;
@property(readonly, nonatomic) unsigned long long approximateBytesRequiredToImport;
@property(readonly, nonatomic) NSNumber *duration;
- (id)mediaGroupId;
- (int)burstPickType;
- (id)groupingUUID;
@property(readonly, nonatomic) NSString *burstUUID;
- (struct CGSize)cgImageSize;
- (void)_accessMetadata:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasAdjustments;
@property(readonly, nonatomic) _Bool isViewable;
@property(readonly, nonatomic) _Bool isTagged;
- (_Bool)isVideoComplementOf:(id)arg1;
- (_Bool)performAdditionalLivePhotoChecksOnImageAsset:(id)arg1;
@property(readonly, nonatomic) _Bool isRendered;
@property(readonly, nonatomic) _Bool isGrouped;
@property(readonly, nonatomic) _Bool hasAudioAttachment;
@property(readonly, nonatomic) _Bool isLivePhoto;
@property(readonly, nonatomic) _Bool isBurst;
@property(readonly, nonatomic) _Bool isSDOF;
@property(readonly, nonatomic) _Bool isHDR;
@property(readonly, nonatomic) _Bool isJpegPlusRAW;
@property(readonly, nonatomic) _Bool isTimelapse;
@property(readonly, nonatomic) _Bool isRelated; // @synthesize isRelated=_isRelated;
@property(readonly, nonatomic) _Bool isAVCHD;
@property(readonly, nonatomic) _Bool isSloMo;
@property(readonly, nonatomic) _Bool isTIFF; // @synthesize isTIFF=_isTIFF;
@property(readonly, nonatomic) _Bool isRAW; // @synthesize isRAW=_isRAW;
@property(readonly, nonatomic) _Bool isJPEG; // @synthesize isJPEG=_isJPEG;
@property(readonly, nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(readonly, nonatomic) _Bool isMovie; // @synthesize isMovie=_isMovie;
@property(readonly, nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
- (_Bool)isValidForReference;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool canReference; // @synthesize canReference=_canReference;
@property(readonly, nonatomic) NSString *parentFolderPath;
- (_Bool)canPreserveFolderStructure;
@property(readonly, nonatomic) id representedObject;
- (id)descriptionWithPrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 uti:(id)arg2 supportedType:(unsigned char)arg3;
- (id)init;
- (void)configureWithUTI:(id)arg1 supportedType:(unsigned char)arg2;
- (void)updateIsRAW:(_Bool)arg1 uti:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

