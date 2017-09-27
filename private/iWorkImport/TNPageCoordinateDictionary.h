//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TNPageCoordinateDictionary : NSObject
{
    struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> _pageCoordinateDictionary;
    struct _opaque_pthread_rwlock_t _rwlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allObjects;
- (void)removeAllObjects;
- (id)objectForPageCoordinate:(struct TSUCellCoord)arg1;
- (void)setObject:(id)arg1 forPageCoordinate:(struct TSUCellCoord)arg2;
- (void)dealloc;
- (id)init;

@end

