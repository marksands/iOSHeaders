//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@class NSDictionary, NSIndexSet;

@interface PGCurationIndexSetTrait : PGCurationTrait
{
    NSIndexSet *_indexSet;
    NSDictionary *_thresholdByIdentifier;
}

@property(retain, nonatomic) NSDictionary *thresholdByIdentifier; // @synthesize thresholdByIdentifier=_thresholdByIdentifier;
@property(readonly, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (void).cxx_destruct;
- (id)debugDescription;
- (double)thresholdForSceneIdentifier:(unsigned int)arg1;
- (_Bool)isActive;
- (id)initWithIndexSet:(id)arg1;

@end

