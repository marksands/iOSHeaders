//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreNFC/NFCTagCommandConfiguration.h>

@interface NFCISO15693ReadMultipleBlocksConfiguration : NFCTagCommandConfiguration
{
    unsigned char _flags;
    unsigned long long _chunkSize;
    struct _NSRange _range;
}

@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)asNSDataArrayWithUID:(id)arg1 error:(id *)arg2;
- (id)initWithRange:(struct _NSRange)arg1 chunkSize:(unsigned long long)arg2;
- (id)initWithRange:(struct _NSRange)arg1 chunkSize:(unsigned long long)arg2 maximumRetries:(unsigned long long)arg3 retryInterval:(double)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

