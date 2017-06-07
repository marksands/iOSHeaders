//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand
{
    NSArray *__desiredTypes;
}

@property(readonly, copy, nonatomic) NSArray *_desiredTypes; // @synthesize _desiredTypes=__desiredTypes;
- (void).cxx_destruct;
- (id)_metadataObjectTypesForRealtimeMetadataTypes:(id)arg1 withAvailableMetadataTypes:(id)arg2;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(id)arg1;

@end

