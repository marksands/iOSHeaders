//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMPreviewFiltersCommand : CAMCaptureCommand
{
    NSArray *_filters;
}

@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (id)initWithFilters:(id)arg1;

@end

