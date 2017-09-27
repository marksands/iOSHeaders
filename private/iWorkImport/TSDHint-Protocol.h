//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSKSelectionPath;

@protocol TSDHint <NSObject>
+ (Class)archivedHintClass;
- (id <TSDHint>)copyForArchiving;
- (id <TSDHint>)lastChildHint;
- (id <TSDHint>)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (_Bool)overlapsWithSelectionPath:(TSKSelectionPath *)arg1;

@optional
- (struct CGSize)effectiveSize;
- (struct CGSize)maximumSize;
- (_Bool)isFirstHint;
@end

