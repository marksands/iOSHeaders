//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCROBrailleTranslatorProtocol <NSObject>
- (NSString *)printBrailleForTechnicalText:(NSString *)arg1 locations:(id *)arg2;
- (NSString *)textForPrintBraille:(NSString *)arg1 contracted:(_Bool)arg2 eightDot:(_Bool)arg3 locations:(id *)arg4;
- (NSString *)printBrailleForText:(NSString *)arg1 contracted:(_Bool)arg2 eightDot:(_Bool)arg3 locations:(id *)arg4 textPositionsRange:(struct _NSRange)arg5;
- (NSString *)printBrailleForText:(NSString *)arg1 contracted:(_Bool)arg2 eightDot:(_Bool)arg3 locations:(id *)arg4;
- (_Bool)activeTableSupportsTechnicalBraille;
- (_Bool)activeTableSupportsEightDotBraille;
- (_Bool)activeTableSupportsContractedBraille;
- (NSString *)activeTable;
- (void)setActiveTable:(NSString *)arg1;
- (unsigned long long)interfaceVersion;
@end

