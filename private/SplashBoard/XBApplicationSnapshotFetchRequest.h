//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString, XBApplicationSnapshotGenerationContext, XBApplicationSnapshotPredicate;

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding>
{
    XBApplicationSnapshotPredicate *_predicate;
    NSArray *_sortDescriptors;
    XBApplicationSnapshotGenerationContext *_fallbackGenerationContext;
}

+ (id)fetchRequest;
@property(retain, nonatomic) XBApplicationSnapshotGenerationContext *fallbackGenerationContext; // @synthesize fallbackGenerationContext=_fallbackGenerationContext;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) XBApplicationSnapshotPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy, nonatomic) NSArray *NSSortDescriptors;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

