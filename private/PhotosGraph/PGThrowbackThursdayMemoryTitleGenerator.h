//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

#import "PGSpecBasedTitleGeneratorDelegate.h"

@class NSString;

@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator <PGSpecBasedTitleGeneratorDelegate>
{
    long long _numberOfYearsAgo;
}

- (id)titleGenerator:(id)arg1 inputForArgument:(id)arg2;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNode:(id)arg1 numberOfYearsAgo:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
