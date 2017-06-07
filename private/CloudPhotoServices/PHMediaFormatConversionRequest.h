//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoServices/NSProgressReporting-Protocol.h>

@class NSError, NSProgress, NSString, NSURL, NSUUID, PFMediaCapabilities, PHMediaFormatConversionCompositeRequest, PHMediaFormatConversionDestination, PHMediaFormatConversionSource;

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting>
{
    _Bool _forceFormatConversion;
    _Bool _shouldPadOutputFileToEstimatedLength;
    _Bool _useTransferBehaviorUserPreference;
    _Bool _requiresSinglePassVideoConversion;
    _Bool _preflighted;
    long long _livePhotoPairingIdentifierBehavior;
    NSString *_livePhotoPairingIdentifier;
    long long _status;
    NSProgress *_progress;
    NSError *_error;
    NSString *_outputFilename;
    PHMediaFormatConversionDestination *_destination;
    id _userInfo;
    NSUUID *_identifier;
    PHMediaFormatConversionSource *_source;
    PFMediaCapabilities *_destinationCapabilities;
    PHMediaFormatConversionCompositeRequest *_parentRequest;
    NSURL *_directoryForTemporaryFiles;
    long long _transferBehaviorUserPreference;
    CDUnknownBlockType _singlePassVideoConversionUpdateHandler;
    double _formatConversionExpansionFactor;
    long long _passthroughConversionAdditionalByteCount;
}

+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
+ (id)stringForRequestStatus:(long long)arg1;
@property _Bool preflighted; // @synthesize preflighted=_preflighted;
@property(nonatomic) long long passthroughConversionAdditionalByteCount; // @synthesize passthroughConversionAdditionalByteCount=_passthroughConversionAdditionalByteCount;
@property(nonatomic) double formatConversionExpansionFactor; // @synthesize formatConversionExpansionFactor=_formatConversionExpansionFactor;
@property _Bool requiresSinglePassVideoConversion; // @synthesize requiresSinglePassVideoConversion=_requiresSinglePassVideoConversion;
@property(copy) CDUnknownBlockType singlePassVideoConversionUpdateHandler; // @synthesize singlePassVideoConversionUpdateHandler=_singlePassVideoConversionUpdateHandler;
@property long long transferBehaviorUserPreference; // @synthesize transferBehaviorUserPreference=_transferBehaviorUserPreference;
@property(retain) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
@property __weak PHMediaFormatConversionCompositeRequest *parentRequest; // @synthesize parentRequest=_parentRequest;
@property(retain) PFMediaCapabilities *destinationCapabilities; // @synthesize destinationCapabilities=_destinationCapabilities;
@property(retain) PHMediaFormatConversionSource *source; // @synthesize source=_source;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain) PHMediaFormatConversionDestination *destination; // @synthesize destination=_destination;
@property _Bool useTransferBehaviorUserPreference; // @synthesize useTransferBehaviorUserPreference=_useTransferBehaviorUserPreference;
@property(retain) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property long long status; // @synthesize status=_status;
@property _Bool shouldPadOutputFileToEstimatedLength; // @synthesize shouldPadOutputFileToEstimatedLength=_shouldPadOutputFileToEstimatedLength;
@property _Bool forceFormatConversion; // @synthesize forceFormatConversion=_forceFormatConversion;
@property(copy) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property long long livePhotoPairingIdentifierBehavior; // @synthesize livePhotoPairingIdentifierBehavior=_livePhotoPairingIdentifierBehavior;
- (void).cxx_destruct;
- (void)updateSinglePassVideoConversionStatus:(long long)arg1 addedRange:(struct _NSRange)arg2 error:(id)arg3;
- (void)enableSinglePassVideoEncodingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)didFinishProcessing;
- (void)padOutputFileToEstimatedLength;
@property(readonly) unsigned long long estimatedOutputFileLength;
- (_Bool)userPreferenceProhibitsFormatConversion;
@property(readonly) NSString *outputFileType;
@property(readonly) NSString *outputPathExtension;
@property(readonly) _Bool requiresFormatConversion;
- (_Bool)requiresLivePhotoPairingIdentifierChange;
@property(readonly) _Bool requiresMetadataChanges;
@property(readonly) _Bool requiresPassthroughConversion;
@property(readonly) long long backwardsCompatibilityStatus;
- (void)preflightWithConversionManager:(id)arg1;
- (void)markAsCancelled;
- (void)setupProgress;
@property(readonly) _Bool isCompositeRequest;
@property(readonly) NSString *statusString;
@property(readonly, copy) NSString *description;
- (_Bool)prepareWithError:(id *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

