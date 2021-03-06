//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressReporting.h"

@class NSDictionary, NSProgress, NSString, NSURL, PHAsset;

@interface PHAssetExportRequest : NSObject <NSProgressReporting>
{
    NSURL *_outputDirectory;
    PHAsset *_asset;
    NSProgress *_progress;
    NSDictionary *_variants;
}

+ (id)assetExportLog;
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id *)arg3;
+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *variants; // @synthesize variants=_variants;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)outputDirectory;
@property(readonly, copy) NSString *description;
- (id)initWithAsset:(id)arg1 variants:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

