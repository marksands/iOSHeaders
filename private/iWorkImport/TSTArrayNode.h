//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTArrayNode : TSTExpressionNode
{
    struct TSCEVectorIndexPair mDimensions;
    NSString *mWhitespaceBeforeFirstChild;
    NSArray *mWhitespaceAfterDelimiters;
}

@property(retain) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=mWhitespaceAfterDelimiters;
@property(retain) NSString *whitespaceBeforeFirstChild; // @synthesize whitespaceBeforeFirstChild=mWhitespaceBeforeFirstChild;
- (id).cxx_construct;
- (void)saveToArchive:(struct ArrayNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ArrayNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)argumentSpec;
- (id)string;
- (int)tokenType;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (struct TSCEVectorIndexPair)dimensions;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 columns:(unsigned char)arg3 rows:(unsigned short)arg4 firstIndex:(unsigned long long)arg5 lastIndex:(unsigned long long)arg6;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end

