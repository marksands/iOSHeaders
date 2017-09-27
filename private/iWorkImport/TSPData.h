//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPSplitableData.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSString, TSPDataAttributes, TSPDataManager, TSPDataMetadata, TSPDigest, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPData : NSObject <TSPSplitableData>
{
    // Error parsing type: Ai, name: _didCull
    long long _identifier;
    TSPDigest *_digest;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataAttributes *_attributes;
    _Bool _isDeallocating;
    TSPDataManager *_manager;
    NSDate *_lastModificationDate;
    TSPDataMetadata *_metadata;
}

+ (_Bool)writeStorage:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)normalizedExtensionForFilename:(id)arg1;
+ (id)typeForFilename:(id)arg1;
+ (id)requiredAVAssetOptions;
+ (id)cullingListeners;
+ (void)removeCullingListener:(id)arg1;
+ (void)addCullingListener:(id)arg1;
+ (id)cullingListenersQueue;
+ (id)null;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2;
+ (id)readOnlyDataFromURL:(id)arg1;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 useFileCoordination:(_Bool)arg3 filename:(id)arg4 context:(id)arg5;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 useFileCoordination:(_Bool)arg3 context:(id)arg4;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
+ (_Bool)isSupportedURL:(id)arg1;
+ (id)pasteboardTypeForIdentifier:(long long)arg1;
+ (id)resourceNameForFilename:(id)arg1 identifier:(long long)arg2;
+ (id)nsDataWithPattern4:(const char *)arg1;
+ (id)digestStringForDataWithPattern4:(const char *)arg1;
+ (id)digestForDataWithPattern4:(const char *)arg1;
+ (id)readOnlyDataWithPattern4:(const char *)arg1 filename:(id)arg2;
+ (id)dataWithPattern4:(const char *)arg1 filename:(id)arg2 context:(id)arg3;
+ (void)temporaryNSDataWithPattern4:(const char *)arg1 accessor:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) TSPDataMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) __weak TSPDataManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) TSPDataAttributes *unsafeAttributes; // @synthesize unsafeAttributes=_attributes;
- (void).cxx_destruct;
- (void)upgradeFallbackColorIfNeeded;
- (id)createMetadataIfNeeded;
- (void)setFallbackColor:(id)arg1;
- (id)fallbackColor;
@property(readonly, nonatomic) _Bool gilligan_isRemote;
- (_Bool)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (_Bool)isStorageInPackage:(id)arg1;
@property(readonly, nonatomic) TSPDigest *digest;
- (id)preferredFilename;
- (void)setFilename:(id)arg1 storage:(id)arg2 ifStorageIs:(id)arg3;
- (void)setFilename:(id)arg1 storage:(id)arg2;
@property(retain, nonatomic) id <TSPDataStorage> storage;
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 filename:(id)arg3 lastModificationDate:(id)arg4 storage:(id)arg5 manager:(id)arg6;
- (id)init;
@property(readonly, nonatomic) unsigned long long encodedLengthIfLocal;
@property(readonly, nonatomic) unsigned long long encodedLength;
- (_Bool)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long lengthIfLocal;
@property(readonly, nonatomic) unsigned long long length;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addDownloadObserver:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)performInputStreamReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)setToCopyOfMetadataIfNil:(id)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *digestString;
@property(readonly, nonatomic) TSPObjectContext *context;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
@property(readonly, nonatomic) _Bool isEncrypted;
@property(readonly, nonatomic) _Bool isExternalData;
@property(readonly, nonatomic) _Bool isApplicationData;
@property(readonly, nonatomic) _Bool isReadable;
@property(readonly, nonatomic) NSString *normalizedExtension;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *filename;
- (id)AVAssetWithOptions:(id)arg1;
- (id)AVAsset;
- (struct CGImage *)newCGImage;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;
- (id)NSData;
- (_Bool)bookmarkDataNeedsWriteWithContext:(id)arg1;
- (id)makeBookmarkDataWithContext:(id)arg1 filename:(id)arg2 error:(out id *)arg3;
@property(copy) TSPDataAttributes *attributes;
- (void)didReplaceDataContents;
- (void)willCull;
- (void)dealloc;
@property(nonatomic, getter=isAcknowledgedByServer) _Bool acknowledgedByServer;
- (id)UIImage;
- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long tsp_length;
- (id)pasteboardType;
@property(readonly, nonatomic) _Bool tsd_allowedToConvertDataAlreadyInDocument;
@property(nonatomic, setter=tsd_setShouldBeInterpretedAsGenericIfUntagged:) _Bool tsd_shouldBeInterpretedAsGenericIfUntagged;

@end

