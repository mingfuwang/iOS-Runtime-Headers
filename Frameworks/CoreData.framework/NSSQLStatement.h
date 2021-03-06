/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSSQLEntity, NSString;

@interface NSSQLStatement : NSObject {
    NSMutableArray *_bindVariables;
    NSSQLEntity *_entity;
    NSSQLEntity *_fakeEntityForFetch;
    BOOL _isImpossibleCondition;
    NSString *_sqlString;
}

- (unsigned int)addBindVariable:(id)arg1;
- (id)bindVariables;
- (void)cacheFakeEntityForFetch:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)fakeEntityForFetch;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;
- (id)initWithEntity:(id)arg1;
- (BOOL)isImpossibleCondition;
- (BOOL)isReadOnly;
- (void)removeAllBindVariables;
- (void)setBindVariables:(id)arg1;
- (void)setImpossibleCondition:(BOOL)arg1;
- (void)setSQLString:(id)arg1;
- (id)sqlString;

@end
