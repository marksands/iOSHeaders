//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARResultDataContext.h"

@class NSArray, NSString;

@interface ARTechniqueGatherContext : NSObject <ARResultDataContext>
{
    id _parentContext;
}

@property(readonly, nonatomic) id parentContext; // @synthesize parentContext=_parentContext;
- (void).cxx_destruct;
- (id)anchorsToRemove;
- (id)anchorsToAdd;
- (id)resultDataOfClass:(Class)arg1;
- (long long)cameraPosition;
- (id)imageData;
- (id)captureGatheredData;
@property(readonly, nonatomic) NSArray *gatheredData;
- (id)initWithParentContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

