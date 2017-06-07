//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSCECellCoordinateVector : NSObject
{
    vector_13f93596 _cellCoordinates;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct CellCoordinateVectorArchive *)arg1;
- (id)initWithArchive:(const struct CellCoordinateVectorArchive *)arg1;
- (void)removeAllCellCoordinates;
- (void)addCellCoordinate:(struct TSUCellCoord)arg1;
- (unordered_set_c5f37819)cellCoordinatesSet;
- (vector_13f93596 *)cellCoordinates;
- (id)init;

@end

