//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSError, NSURL;
@protocol OS_dispatch_queue;

@interface NTKCompanionIrisVideoExportSession : NSObject
{
    long long _onceExport;
    NSObject<OS_dispatch_queue> *_exportQueue;
    long long _onceEncode;
    NSObject<OS_dispatch_queue> *_encodeQueue;
    AVAsset *_video;
    unsigned long long _bitrate;
    NSURL *_outputURL;
    long long _status;
    NSError *_error;
    struct CGSize _outputSize;
    struct CGRect _crop;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) struct CGRect crop; // @synthesize crop=_crop;
@property(readonly, nonatomic) AVAsset *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (id)_encodeQ;
- (id)_exportQ;
- (id)_makeWriter;
- (id)_makeReader;
- (void)exportAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithVideo:(id)arg1 crop:(struct CGRect)arg2 outputSize:(struct CGSize)arg3 bitrate:(unsigned long long)arg4 outputURL:(id)arg5;

@end

