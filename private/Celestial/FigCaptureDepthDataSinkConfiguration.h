//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration
{
    _Bool _discardsLateDepthData;
    _Bool _filteringEnabled;
}

@property(nonatomic) _Bool filteringEnabled; // @synthesize filteringEnabled=_filteringEnabled;
@property(nonatomic) _Bool discardsLateDepthData; // @synthesize discardsLateDepthData=_discardsLateDepthData;
- (int)sinkType;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

