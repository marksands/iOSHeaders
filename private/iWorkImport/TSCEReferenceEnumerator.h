//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEReferenceEnumerator : NSObject
{
    struct TSCEASTNodeArray *mAST;
    struct TSCEASTNodeArrayReferenceIteratorState *mReferenceIteratorState;
}

- (const struct TSCECReference *)nextReference;
- (void)dealloc;
- (id)initWithCalculationEngine:(id)arg1 defaultFormulaOwnerUID:(const UUIDData_5fbc143e *)arg2 nodeArray:(const struct TSCEASTNodeArray *)arg3 myHostCellID:(struct TSUCellCoord)arg4 doImplicitIntersection:(_Bool)arg5 doUidReferences:(_Bool)arg6;

@end

