//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPStreamDataStorage.h>

#import <iWorkImport/TSPDocumentResourceDataStorageInfo-Protocol.h>

@class NSDataAsset, NSString, TSPDocumentResourceInfo, TSUOnce;
@protocol TSPDocumentResourceBundleProvider><TSUResourceRequest, TSUResourceRequest;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceDataAssetStorage : TSPStreamDataStorage <TSPDocumentResourceDataStorageInfo>
{
    id <TSPDocumentResourceBundleProvider><TSUResourceRequest> _resourceRequest;
    TSPDocumentResourceInfo *_documentResourceInfo;
    TSUOnce *_dataAssetOnceToken;
    NSDataAsset *_dataAsset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSPDocumentResourceInfo *documentResourceInfo;
@property(readonly, nonatomic) id <TSUResourceRequest> resourceRequest;
- (void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)downloadProgress;
- (_Bool)needsDownload;
- (_Bool)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)NSDataWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDataAsset *dataAsset;
- (id)fallbackColor;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (unsigned long long)encodedLength;
- (unsigned long long)length;
- (_Bool)isReadable;
- (id)documentResourceLocator;
- (id)initWithResourceRequest:(id)arg1 documentResourceInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

