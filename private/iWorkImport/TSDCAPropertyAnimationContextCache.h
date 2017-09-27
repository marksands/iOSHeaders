//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDCAAnimationContextCache.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache
{
    _Bool _isAnimationKeyTypeOfRotation;
    _Bool _isAnimationKeyHidden;
    _Bool _isAnimationKeyDoubleSided;
    _Bool _isObjectTypeCGColor;
    NSString *_keyPath;
}

@property(nonatomic) _Bool isObjectTypeCGColor; // @synthesize isObjectTypeCGColor=_isObjectTypeCGColor;
@property(readonly, nonatomic) _Bool isAnimationKeyDoubleSided; // @synthesize isAnimationKeyDoubleSided=_isAnimationKeyDoubleSided;
@property(readonly, nonatomic) _Bool isAnimationKeyHidden; // @synthesize isAnimationKeyHidden=_isAnimationKeyHidden;
@property(readonly, nonatomic) _Bool isAnimationKeyTypeOfRotation; // @synthesize isAnimationKeyTypeOfRotation=_isAnimationKeyTypeOfRotation;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;
- (id)adjustedResultWithValue:(id)arg1;
- (id)initWithAnimation:(id)arg1;

@end

