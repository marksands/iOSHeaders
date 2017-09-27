//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSUtils : NSObject
{
}

+ (id)deviceProductType;
+ (id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1;
+ (id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2;
+ (id)rootQueueWithFixedPriority:(int)arg1;
+ (_Bool)hasRemoteCoreSpeech;
+ (_Bool)supportCSTwoShotDecision;
+ (_Bool)supportSelfTriggerSuppression;
+ (_Bool)supportOpportunisticZLL;
+ (_Bool)supportPremiumAssets;
+ (_Bool)supportKeywordDetector;
+ (_Bool)supportContinuousVoiceTrigger;
+ (_Bool)shouldRunVTOnCS;
+ (id)getSiriLanguageWithFallback:(id)arg1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (id)alertMuteSettings;
+ (id)opusRecordSettings;
+ (id)lpcmRecordSettings;
+ (id)voiceTriggerRecordContext;
+ (struct AudioStreamBasicDescription)aiffFileASBD;
+ (struct AudioStreamBasicDescription)utteranceFileASBD;
+ (struct AudioStreamBasicDescription)lpcmNarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmASBD;
+ (struct AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)lpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)opusNarrowBandASBD;
+ (struct AudioStreamBasicDescription)opusASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16NarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16ASBD;
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)iterateBitset:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (double)getHostClockFrequency;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;
+ (id)assetHashInResourcePath:(id)arg1;

@end

