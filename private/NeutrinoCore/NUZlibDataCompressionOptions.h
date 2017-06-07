//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUZlibDataCompressionOptions : NSObject
{
    int _compressionLevel;
    int _strategy;
    int _windowBits;
    int _memoryLevel;
    unsigned long long _chunkSize;
}

+ (id)defaultOptions;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(nonatomic) int memoryLevel; // @synthesize memoryLevel=_memoryLevel;
@property(nonatomic) int windowBits; // @synthesize windowBits=_windowBits;
@property(nonatomic) int strategy; // @synthesize strategy=_strategy;
@property(nonatomic) int compressionLevel; // @synthesize compressionLevel=_compressionLevel;
- (void)setCompressionStrategy:(int)arg1;

@end

