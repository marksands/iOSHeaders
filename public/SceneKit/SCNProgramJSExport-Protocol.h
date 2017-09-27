//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSDictionary, NSString;

@protocol SCNProgramJSExport <JSExport>
+ (id)program;
@property(retain, nonatomic) id <MTLLibrary> library;
@property(nonatomic) id <SCNProgramDelegate> delegate;
@property(nonatomic, getter=isOpaque) _Bool opaque;
@property(copy, nonatomic) NSString *fragmentFunctionName;
@property(copy, nonatomic) NSString *vertexFunctionName;
@property(copy, nonatomic) NSString *geometryShader;
@property(copy, nonatomic) NSString *tessellationEvaluationShader;
@property(copy, nonatomic) NSString *tessellationControlShader;
@property(copy, nonatomic) NSString *fragmentShader;
@property(copy, nonatomic) NSString *vertexShader;
- (id)copy;
- (NSString *)semanticForSymbol:(NSString *)arg1;
- (void)setSemantic:(NSString *)arg1 forSymbol:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)handleBindingOfBufferNamed:(NSString *)arg1 frequency:(long long)arg2 usingBlock:(void (^)(id <SCNBufferStream>, SCNNode *, id <SCNShadable>, SCNRenderer *))arg3;
@end

