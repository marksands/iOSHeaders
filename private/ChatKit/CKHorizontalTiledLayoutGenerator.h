//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTiledLayoutGenerator.h>

@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator
{
    struct CGPoint _origin;
    double _referenceHeight;
}

@property(nonatomic) double referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (_Bool)_addSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;
- (_Bool)_addColumnWithTiles:(CDStruct_1417b155 *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateColumnFramesWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)_addColumnWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2;
- (_Bool)_isAtEndOfColumn;
- (_Bool)_hasLeftSuboptimalColumn;
- (_Bool)_scanNonPanoramaSequence:(CDStruct_1417b155 *)arg1 count:(long long)arg2;
- (_Bool)_scanSpecialSequenceColumn:(CDStruct_1417b155 *)arg1 count:(long long *)arg2;
- (_Bool)_scanSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;
- (_Bool)_scanTripletWithLargeLead:(CDStruct_1417b155 *)arg1;
- (_Bool)_parseSpecialSubsequenceWithColumnRequired:(_Bool)arg1 columnParsed:(_Bool *)arg2;
- (_Bool)_parseSpecialSequence;
- (_Bool)_parseSpecialTileTriplet;
- (_Bool)_parseTileTriplet;
- (_Bool)_parseTilePair;
- (_Bool)_parseSingleTile;
- (double)referenceDistanceForMagneticGuidelines;
- (_Bool)parseNextTiles;
- (void)willParseTiles;

@end

