//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPItemToURLResourcesConverter : NSObject
{
    NSMutableDictionary *_gettersByURLKey;
    NSMutableDictionary *_typesByURLKey;
}

+ (id)dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2;
- (void).cxx_destruct;
- (id)_dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2;
- (void)_cacheImplementedPropertiesForClass:(Class)arg1;
- (void)_addHelperMethodsToClass:(Class)arg1;
- (void)_addMethod:(SEL)arg1 toClass:(Class)arg2;
- (id)initWithItemClass:(Class)arg1;

@end

