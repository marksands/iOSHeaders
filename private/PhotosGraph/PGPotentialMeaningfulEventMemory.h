//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphCollectionNode;

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory
{
    PGGraphCollectionNode *_collectionNode;
    unsigned long long _meaning;
}

@property(readonly) unsigned long long meaning; // @synthesize meaning=_meaning;
@property(readonly) PGGraphCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
- (void).cxx_destruct;
- (id)initWithCategory:(long long)arg1 collectionNode:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4;

@end

