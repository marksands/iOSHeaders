//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSTFormulaToken-Protocol.h>

@class NSArray, NSString, TSCEFunctionArgumentSpec, TSTWPTokenAttachment, UIViewController;

__attribute__((visibility("hidden")))
@interface TSTExpressionNode : TSPObject <TSTFormulaToken>
{
    NSArray *mChildren;
    TSCEFunctionArgumentSpec *mArgumentSpec;
    TSTWPTokenAttachment *mTokenAttachment;
    unsigned long long mFirstIndex;
    unsigned long long mLastIndex;
    NSString *mWhitespaceBefore;
    NSString *mWhitespaceAfter;
}

@property(retain, nonatomic) NSString *whitespaceAfter; // @synthesize whitespaceAfter=mWhitespaceAfter;
@property(retain, nonatomic) NSString *whitespaceBefore; // @synthesize whitespaceBefore=mWhitespaceBefore;
@property(nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=mLastIndex;
@property(nonatomic) unsigned long long firstIndex; // @synthesize firstIndex=mFirstIndex;
@property(nonatomic) TSTWPTokenAttachment *tokenAttachment; // @synthesize tokenAttachment=mTokenAttachment;
- (id)description;
- (void)saveToArchive:(struct ExpressionNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ExpressionNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)isEqualToExpressionNode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)eliminateLargestCommonSubexpression:(id)arg1 withSymbolTable:(struct TSCESymbolTable *)arg2 newIdentifierOut:(id *)arg3;
- (id)p_eliminateLargestCommonSubexpressionWithLCA:(id)arg1 expressions:(id)arg2 withSymbolTable:(struct TSCESymbolTable *)arg3 newIdentifierOut:(id *)arg4;
- (id)lowestCommonAncestor:(id)arg1;
- (id)eliminateLargestCommonSubexpressionWithSymbolTable:(struct TSCESymbolTable *)arg1 newIdentifierOut:(id *)arg2;
- (_Bool)canEliminateLargestCommonSubexpressionWithSymbolTable:(struct TSCESymbolTable *)arg1;
- (void)replaceOccurrencesOfChildrenInSet:(id)arg1 withIdentifier:(id)arg2 symbol:(unsigned int)arg3;
- (void)addAllIdentifiersToSymbolTable:(struct TSCESymbolTable *)arg1;
- (id)largestCommonSubexpressionExcludingExisting:(id)arg1 cseData:(id)arg2;
- (id)largestCommonSubexpression;
- (void)addVariablesMatchingPrefix:(id)arg1 forFormulaIndex:(unsigned long long)arg2 toDictionary:(id)arg3 symbolTable:(struct TSCESymbolTable *)arg4;
- (unsigned int)symbol;
- (_Bool)isFunctionNode;
- (struct _NSRange)range;
- (unsigned long long)lastIndexOfSubtree;
- (unsigned long long)firstIndexOfSubtree;
- (long long)compareFirstLastIndices:(id)arg1;
- (void)enumerateExpressionNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(unsigned char)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5;
- (_Bool)hasMenu;
@property(readonly, retain, nonatomic) UIViewController *popover;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2;
- (id)detokenizedText;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
@property(retain, nonatomic) NSArray *children;
@property(retain, nonatomic) TSCEFunctionArgumentSpec *argumentSpec;
- (id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 forceReferenceInterpretation:(_Bool)arg3 symbolTable:(struct TSCESymbolTable *)arg4 oldToNewNodeMap:(id)arg5;
- (_Bool)forceReferenceInterpretationOfChildren;
- (id)deepCopyIntoContext:(id)arg1 bakeModes:(_Bool)arg2 withTokenDict:(id)arg3;
- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2 children:(id)arg3;
- (void)dealloc;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *string; // @dynamic string;
@property(readonly, nonatomic) int tokenType; // @dynamic tokenType;

@end

