//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (SafariCoreExtras)
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;
+ (id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1;
- (_Bool)safari_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)safari_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)safari_groupUsingBlock:(CDUnknownBlockType)arg1;
- (id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(unsigned long long)arg3 indexIntoArray:(unsigned long long)arg4;
- (id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1;
- (id)safari_diffWithArray:(id)arg1;
- (id)safari_minimumUsingComparator:(CDUnknownBlockType)arg1;
- (id)safari_maximumUsingComparator:(CDUnknownBlockType)arg1;
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)safari_reduceObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_filterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_mapObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_setByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)safari_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_arrayAtIndex:(unsigned long long)arg1;
- (id)safari_dictionaryAtIndex:(unsigned long long)arg1;
- (id)safari_URLAtIndex:(unsigned long long)arg1;
- (id)safari_stringAtIndex:(unsigned long long)arg1;
- (id)safari_numberAtIndex:(unsigned long long)arg1;
@end

