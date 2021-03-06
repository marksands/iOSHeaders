//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTSectionQueueDescriptor.h"

@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor>
{
    NSArray *_sectionDescriptors;
    unsigned long long _visibleSectionConfigsLimit;
}

@property(readonly, nonatomic) unsigned long long visibleSectionConfigsLimit; // @synthesize visibleSectionConfigsLimit=_visibleSectionConfigsLimit;
@property(readonly, copy, nonatomic) NSArray *sectionDescriptors; // @synthesize sectionDescriptors=_sectionDescriptors;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueueConfig:(id)arg1 appConfiguration:(id)arg2 todayData:(id)arg3 supplementalFeedFilterOptions:(long long)arg4 respectsWidgetVisibleSectionsLimit:(_Bool)arg5;
- (id)init;

@end

