//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class CUIPSDLayerGroupRef;

__attribute__((visibility("hidden")))
@interface CUIPSDLayerEnumerator : NSEnumerator
{
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    _Bool _isImageFile;
}

+ (id)enumeratorWithPSDImage:(id)arg1;
+ (id)enumeratorWithPSDLayerGroup:(id)arg1;
- (id)allObjects;
- (id)nextObject;
- (void)dealloc;
- (id)initWithPSDImage:(id)arg1;
- (id)initWithPSDLayerGroup:(id)arg1;

@end

