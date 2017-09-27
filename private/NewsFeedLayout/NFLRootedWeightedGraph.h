//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FCSetValueMapTable, NSMutableDictionary, NSMutableSet;

@interface NFLRootedWeightedGraph : NSObject <NSCopying>
{
    id _rootNode;
    FCSetValueMapTable *_parentToChildren;
    FCSetValueMapTable *_childToParents;
    NSMutableSet *_childlessNodes;
    NSMutableSet *_parentlessNodes;
    NSMutableDictionary *_weightsByEdge;
}

@property(retain, nonatomic) NSMutableDictionary *weightsByEdge; // @synthesize weightsByEdge=_weightsByEdge;
@property(retain, nonatomic) NSMutableSet *parentlessNodes; // @synthesize parentlessNodes=_parentlessNodes;
@property(retain, nonatomic) NSMutableSet *childlessNodes; // @synthesize childlessNodes=_childlessNodes;
@property(retain, nonatomic) FCSetValueMapTable *childToParents; // @synthesize childToParents=_childToParents;
@property(retain, nonatomic) FCSetValueMapTable *parentToChildren; // @synthesize parentToChildren=_parentToChildren;
@property(retain, nonatomic) id rootNode; // @synthesize rootNode=_rootNode;
- (void).cxx_destruct;
- (void)_submitMaxPath:(id)arg1 withWeight:(double)arg2 toNode:(id)arg3 maxPathStore:(id)arg4;
- (id)_edgeRepresentationFromNode:(id)arg1 toNode:(id)arg2;
- (void)_setWeight:(double)arg1 forEdgeFromNode:(id)arg2 toNode:(id)arg3;
- (double)weightForEdgeFromNode:(id)arg1 toNode:(id)arg2;
- (void)debug_assertDataStructuresInSync;
- (id)parentsOfNode:(id)arg1;
- (id)childrenOfNode:(id)arg1;
- (void)removeParentlessNodesExhaustivelyButRootNode;
- (void)removeChildlessNodesExhaustivelyButNode:(id)arg1;
- (void)removeNode:(id)arg1;
- (_Bool)containsNode:(id)arg1;
- (void)removeEdgeFromNode:(id)arg1 toNode:(id)arg2;
- (void)addDirectedEdgeWithWeight:(double)arg1 fromNode:(id)arg2 toNode:(id)arg3;
- (id)highestAverageWeightedPathsFromRootToNode:(id)arg1 pathWeight:(double *)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRootNode:(id)arg1;
- (id)init;

@end

