#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#pragma warning(disable:4996)

typedef struct words {
	char e_word[15];
	char k_word[30];
}Words;

Words word_days1[50] = {
	{"hold", "손에들다"},
	{"arrange", "정리하다"},
	{"pass", "통과하다"},
	{"reach", "손을뻗다"},
	{"adjust","조절하다"},
	{"point","요점"},
	{"load","싣다"},
	{"occupied","사용중인"},
	{"bend","구부리다"},
	{"lean","기대다"},
	{"park","공원"},
	{"throw away","~을 버리다"},
	{"pack", "포장하다"},
	{"overlook","간과하다"},
	{"aisle","통로"},
	{"fill", "채우다"},
	{"inspect","점검하다"},
	{"trim","다듬다"},
	{"pave","포장하다"},
	{"assemble","모으다"},
	{"sail","항해하다"},
	{"mow","베다"},
	{"copy","복사"},
	{"perform","공연하다"},
	{"transport","수송"},
	{"shop","가게"},
	{"pour","따르다"},
	{"shade","그늘"},
	{"surround","둘러싸다"},
	{"tow","견인하다"},
	{"wear","입다"},
	{"rake","갈퀴"},
	{"place","놓다"},
	{"face","직면하다"},
	{"line","줄서다"},
	{"plug in","플러그를 꽂다"},
	{"cross", "가로지르다"},
	{"hang","걸다"},
	{"distribute","배포하다"},
	{"fold","접다"},
	{"reflect", "비추다"},
	{"address", "연설하다"},
	{"plant", "식물"},
	{"file", "파일"},
	{"operate", "작동하다"},
	{"stack", "쌓다"},
	{"clap", "박수치다"},
	{"kneel", "무릎을 꿇다"},
	{"turn on", "켜다"},
	{"stroll", "산책하다"} };

Words word_days2[50] = {
		{"pile", "더미"},
		{"store","보관하다"},
		{"pick up","집어들다"},
		{"serve","제공하다"},
		{"board","타다"},
		{"frame","뼈대"},
		{"relax","휴식을 취하다"},
		{"roll","구르다"},
		{"bow","인사"},
		{"clear","분명한"},
		{"display","진열하다"},
		{"extend","손을 뻗다"},
		{"sip","조금씩 마시다"},
		{"work on","~에대해 작업하다"},
		{"sweep","쓸다"},
		{"browse","둘러보다"},
		{"lie","눕다"},
		{"wrap","포장하다"},
		{"exercise","운동하다"},
		{"border","국경"},
		{"set up","세우다"},
		{"spread","펼치다"},
		{"wipe","닦다"},
		{"dine","식사를 하다"},
		{"stock","재고"},
		{"fasten","매다"},
		{"exchange","교환하다"},
		{"take notes","필기하다"},
		{"polish","닦다"},
		{"lift","들어올리다"},
		{"run","이어지다"},
		{"sort", "분류하다"},
		{"sew","바느질하다"},
		{"put away","치우다"},
		{"spray","뿌리다"},
		{"enter","입력하다"},
		{"move","옮기다"},
		{"check","확인하다"},
		{"climb","오르다"},
		{"row","노를 젓다"},
		{"exit","나가다"},
		{"mount","설치하다"},
		{"be seated","앉다"},
		{"dock","부두"},
		{"put up","붙이다"},
		{"cast","출연자"},
		{"fall","가을"},
		{"post","게시하다"},
		{"take off","이륙하다"},
		{"outdoor", "야외에서"}
};

Words word_days3[50] = {
	{"responsible","책임있는"},
	{"available","이용 할 수있는"},
	{"utility","공공시설"},
	{"repair","수리"},
	{"offer","제공하다"},
	{"status","상태"},
	{"record","기록하다"},
	{"leave","남기다"},
	{"session","학기"},
	{"organize","조직하다"},
	{"revise","수정하다"},
	{"join","가입하다"},
	{"borrow","빌리다"},
	{"charge","청구하다"},
	{"interview","면접"},
	{"bottom","맨 아래"},
	{"prefer","선호하다"},
	{"approve","승인하다"},
	{"document","서류"},
	{"order","순서"},
	{"projection","추정"},
	{"contact","연락하다"},
	{"bill","지폐"},
	{"colleague","동료"},
	{"review","복습하다"},
	{"cost","가격"},
	{"make it","성공하다"},
	{"proofread","교정보다"},
	{"committee","위원회"},
	{"retire","은퇴하다"},
	{"add","더하다"},
	{"flyer","전단"},
	{"deadline","마감일"},
	{"ship","수송하다"},
	{"take over","인계받다"},
	{"get to","도착하다"},
	{"return","돌아가다"},
	{"draft","초안"},
	{"depend on","~에 의존하다"},
	{"delay","지연시키다"},
	{"supply","공급하다"},
	{"submit","제출하다"},
	{"negotiation","협상"},
	{"mind","꺼리다"},
	{"find out","알아내다"},
	{"agreement","동의"},
	{"formal","공식적인"},
	{"banquet","연회"},
	{"presentation","발표"},
	{"subscription","구독(료)"}
};

Words word_days4[50] = {
	{"schedule","일정"} ,
	{"process","과정"},
	{"reception","접수처"},
	{"consult","자문하다"},
	{"reimburse","변제하다"},
	{"challenging","도전적인"},
	{"run out","떨어지다"},
	{"transfer","이동하다"},
	{"invoice","청구서"},
	{"celebrate","축하하다"},
	{"ride","타다"},
	{"label","상표"},
	{"supervisor","감독관"},
	{"manual","설명서"},
	{"sign","표지판"},
	{"lead","선두"},
	{"monitor","화면"},
	{"inventory","재고"},
	{"identfication","신원확인"},
	{"survey","설문조사"},
	{"suggest","제안하다"},
	{"go ahead","계속하다"},
	{"belong to","~소유이다"},
	{"make sure","반드시 ~하도록하다"},
	{"donate","기부하다"},
	{"lower","아래쪽의"},
	{"branch","나뭇가지"},
	{"manage","경영하다"},
	{"ask for","요청하다"},
	{"deliver", "배달하다"},
	{"recommend","추천하다"},
	{"purchase","구매"},
	{"head","책임자"},
	{"know if","~인지 알다"},
	{"lend","빌려주다"},
	{"weigh","무게가 ~이다"},
	{"accept","수락하다"},
	{"improve","향상시키다"},
	{"downtown","시내"},
	{"require","요구하다"},
	{"renew","갱신하다"},
	{"no later than","늦어도 ~까지"},
	{"employee","종업원"},
	{"holiday","휴일"},
	{"local","지역의"},
	{"deserve","~할 가치가 있다"},
	{"upstairs","위층"},
	{"wonder","놀라움"},
	{"mail","우편"},
	{"be supposed to","~하기로 되어있다"} };

Words word_days5[50] = {
		{"candidate","후보자"},
		{"option","선택"},
		{"replace","대체하다"},
		{"not until","~가 되어야 가능하다"},
		{"issue","쟁점"},
		{"promotion","승진"},
		{"shift","변화"},
		{"opening","공석"},
		{"impressed","감명을 받은"},
		{"brainstorm","아이디어를 생각해내다"},
		{"feedback","피드백"},
		{"confirm","확인하다"} ,
		{"domestic","국내의"},
		{"warranty","보증서"},
		{"cover","덮개"},
		{"upcoming","다가오는"},
		{"figure out","계산해내다"},
		{"install","설치하다"},
		{"community","공동체"},
		{"nominate","지명하다"},
		{"publish","출판하다"},
		{"locate","위치시키다"},
		{"contractor","계약자"},
		{"save","저축하다"},
		{"reject","거절하다"},
		{"check out","확인하다"},
		{"extra","추가로"},
		{"relationship","관계"},
		{"apologize","사과하다"},
		{"assemly","의회"},
		{"reservation","예약"},
		{"be sure to","반드시 ~하다"},
		{"assorted","여러가지의"},
		{"experience","경험"},
		{"facility","시설"},
		{"loan","대여"},
		{"spot","장소"},
		{"recipe","요리법"},
		{"stop by","~에 잠깐들르다"},
		{"prescription","처방적"},
		{"put together","준비하다"},
		{"spacious","넓은"},
		{"potential","잠재력"},
		{"improvement","향상"},
		{"in the meantime","그동안에"},
		{"lease","임대하다"},
		{"remodeling","리모델링"},
		{"raise","인상"},
		{"overseas","해외로"},
		{"account","계좌"} };

Words word_days6[50] = {
		{"expand","확장시키다"},
		{"annual","연간의"},
		{"promote","승진시키다"},
		{"deal","거래"},
		{"space","공간"},
		{"popular","인기있는"},
		{"postpone","연기하다 "},
		{"budget","예산"},
		{"cut back","줄이다"},
		{"qualified","자격있는"},
		{"neighborhood","이웃사람"},
		{"away","떨어져서"},
		{"correct","수정하다"},
		{"specialize","전공하다"},
		{"inconvenience","불편"},
		{"reasonable","합리적인"},
		{"turn out","~으로 판명되다"},
		{"advantage","강점"},
		{"own","소유하다"},
		{"workload","업무량"},
		{"broken","깨진"},
		{"misplace","물건 둔 곳을 잊어버리다"},
		{"application","지원"},
		{"connect","연결하다"},
		{"policy","정책"},
		{"sound","소리"},
		{"handout","유인물"},
		{"accommodate","수용하다"},
		{"rent","임대료"},
		{"crowded","붐비는"},
		{"see if","~인지 알아보다"},
		{"release","출시"},
		{"expense","비용"},
		{"set aside","떼어놓다"},
		{"background","배경"},
		{"author","저자"},
		{"evaluation","평가"},
		{"regional","지역의"},
		{"shape","모양"},
		{"block","구역"},
		{"suspend","일시중지하다"},
		{"project","계획"},
		{"public","대중의"},
		{"correction","수정"},
		{"landscaping","조경"},
		{"injure","부상을입다"},
		{"fill out","기입하다"},
		{"that way","그렇게 하면"},
		{"damaged","손해를 입은"},
		{"in time","시간맞춰"} };

Words word_days7[50] = {
	{"interested","흥미를가진"},
	{"attend","참석하다"},
	{"estimate","추정"},
	{"flexible","융통성있는"},
	{"fee","요금"},
	{"sold out","품절된"},
	{"refundable","환불가능한"},
	{"hire","고용하다"},
	{"electronically","전자적으로"},
	{"payment","지불"},
	{"influence","영향"},
	{"charity","자선단체"},
	{"a couple of","둘의"},
	{"property","재산"},
	{"leak","누수"},
	{"management","경영"},
	{"apply","지원하다"},
	{"last-minute","막판의"},
	{"collection","수집품"},
	{"maintenance","유지"},
	{"originally","원래"},
	{"progress","진전"},
	{"fascinating","대단히 흥미로운"},
	{"cancel","취소하다"},
	{"lack","결핍"},
	{"luncheon","점심"},
	{"later","나중에"},
	{"edition","판"},
	{"missing","없어진"},
	{"select","선택하다"},
	{"deposit","예금"},
	{"layout","배치"},
	{"terrific","훌륭한"},
	{"lay off","해고하다"},
	{"detail","세부사항"},
	{"calculate","계산하다"},
	{"mix-up","혼동"},
	{"adverisement","광고"},
	{"catering","출장요리"},
	{"error","오류"},
	{"overcharge","과다청구하다"},
	{"routine","틀에 박힌 일"},
	{"develop","발전시키다"},
	{"register","등록부"},
	{"attract","매혹하다"},
	{"out of town","출장중인"},
	{"rush","돌진"},
	{"manufacturer","제조사"},
	{"negotiate","협상하다"},
	{"tenant","세입자"} };

Words word_days8[50] = {
	{"award","상"},
	{"feature","특징"},
	{"souvenir","기념품"},
	{"broadcast","방송"},
	{"representative","대표자"},
	{"demonstration","시위"},
	{"culinary","요리의"},
	{"hesitate","망설이다"},
	{"proceed to","~로 가다"},
	{"alternative","대안"},
	{"attendee","참석자"},
	{"reward","보상"},
	{"patron","고객"},
	{"loyal","충성스러운"},
	{"applause","박수갈채"},
	{"reputation","평판"},
	{"outgoing","사교적인"},
	{"comprehensive","종합적인"},
	{"direct","직접적인"},
	{"host","주인"},
	{"talented","재능있는"},
	{"remarkable","주목할만한"},
	{"anniversary","기념일"},
	{"report","보고서"},
	{"contain","포함하다"},
	{"permit","허가"},
	{"tune","곡조"},
	{"retail","소매"},
	{"smoothly","순조롭게"},
	{"accurate","정확한"},
	{"last","지속되다"},
	{"note","언급하다"},
	{"refreshments","다과"},
	{"remind","상기시키다"},
	{"organization","조직"},
	{"construction","공사"},
	{"share","나누다"},
	{"discuss","토론하다"},
	{"outdated","구식의"},
	{"highlight","강조하다"},
	{"prestigious","일류의"},
	{"mark","표시"},
	{"enthusiastic","열광적인"},
	{"recognize","알아보다"},
	{"concern","걱정"},
	{"task","과제"},
	{"attention","주의"},
	{"practical","실용적인"},
	{"volunteer","지원자"},
	{"get back to","~로 돌아오다"} };

Words word_days9[50] = {
	{"prohibit","금지하다"},
	{"thrilled","신나는"},
	{"complimentary","무료의"},
	{"look forward to","~을 고대하다"},
	{"fit","꼭 맞다"},
	{"article","기사"},
	{"announcement","안내방송"},
	{"renowned","유명한"},
	{"discount","할인"},
	{"commute","통근"},
	{"career","경력"},
	{"package","포장"},
	{"favorable","호의적인"},
	{"conident","자신있는"},
	{"reminder","알림"},
	{"unique","독특한"},
	{"match","경기"},
	{"sale","할인"},
	{"inspire","영감을주다"},
	{"nutritious","영양가있는"},
	{"point out","가리키다"},
	{"comfortable","편안한"},
	{"keynote","요지"},
	{"athletic","운동"},
	{"introduce","소개하다"},
	{"high-quality","고급의"},
	{"prepare","준비하다"},
	{"device","기구"},
	{"take time","시간을내다"},
	{"minor","사소한"},
	{"lateset","최신의"},
	{"decorate","장식하다"},
	{"innovative","혁신적인"},
	{"vote","투표"},
	{"detour","우회"},
	{"fund","자급"},
	{"private","개인적인"},
	{"forecast","예보"},
	{"restore","복구하다"},
	{"expert","전문가"},
	{"occasion","때"},
	{"list","목록"},
	{"in case","~한 경우에는"},
	{"honor","명예"},
	{"run low","고갈되다"},
	{"explain","설명하다"},
	{"slippery","미끄러운"},
	{"fair","공평한"},
	{"furnishings","가구"},
	{"feel free to","마음껏~하다"} };

Words word_days10[50] = {
	{"limited","한정된"},
	{"rain","훈련하다"},
	{"recall","기억해내다"},
	{"total","총계의"},
	{"familiar","친숙한"},
	{"individual","개인의"},
	{"seating","좌석"},
	{"support","지지하다"},
	{"priority","우선사항"},
	{"apprentice","실습생"},
	{"grateful","감사하는"},
	{"leadership","리더십"},
	{"continue","계속하다"},
	{"take place","개최되다"},
	{"moment","순간"},
	{"figure","숫자"},
	{"administrative","행정의"},
	{"spend","보내다"},
	{"belongings","소지품"},
	{"track","자취"},
	{"reserach","연구"},
	{"explore","조사하다"},
	{"pleasure","기쁨"},
	{"congratulate","축하하다"},
	{"merger","합병"},
	{"break","짧은휴식"},
	{"competition","경쟁"},
	{"inexpensive","비싸지않은"},
	{"payroll","총급여액"},
	{"district","지역"},
	{"negative","부정적인"},
	{"upgrade","향상시키다"},
	{"agency","기관"},
	{"sample","견본"},
	{"treat","대접"},
	{"renovation","수리"},
	{"need","필요"},
	{"historic","역사적인"},
	{"warehouse","창고"},
	{"resident","주민"},
	{"successful","성공적인"},
	{"intact","온전한"},
	{"extraordinary","비범한"},
	{"generous","관대한"},
	{"audience","청중"},
	{"drop","감소"},
	{"carry","~을운반하다"},
	{"various","다양한"},
	{"in advance",""},
	{"keep in mind","명심하다"} };

Words word_days11[50] = { {"conduct","행동하다"},
	{"assure","보증하다"}, {"launch","출시"}, {"fulfill","충족하다"}, {"implement","도구"}, {"prevent","방지하다"}, {"indicate","나타내다"}, {"assign","배정하다"}, {"relocate","이동하다"}, {"affect","영향을미치다"}, {"soar","치솟다"}, {"attach","붙이다"}, {"recruit","신입사원"}, {"consider","고려하다"}, {"enhance","향상시키다"}, {"accompany","동행하다"}, {"guarantee","보증"}, {"reorganize","재편성하다"}, {"retain","보유하다"},{"afford","여유가있다"},  {"decline","하락"}, {"collaborate","협력하다"}, {"enlarge","확대하다"}, {"undergo","겪다"}, {"modify","변경하다"}, {"acknowledge","감사를표하다"}, {"clarify","분명히하다"}, {"boost","증진시키다"}, {"vary","다양하다"}, {"engage","관여하다"}, {"preserve","보존하다"}, {"react","반응하다"}, {"convert","바꾸다"}, {"obtain","획득하다"}, {"obstruct","방해하다"}, {"expect","예상하다"}, {"dwindle","축소되다"}, {"solicit","간청하다"}, {"allocate","배당하다"}, {"foster" "육성하다"}, {"alleviate","완화시키다"}, {"undertake","떠맡다"}, {"omit","생략하다"}, {"incur","초래하다"}, {"maneuver","조종하다"}, {"expedite","신속히처리하다"}, {"entail","필요로하다"}, {"officiate","이행하다"}, {"remit","송금하다"}, {"fluctuate","변동하다"} };

Words word_days12[50] = { {"benefit","혜택"},
	{"grant","보조금"},
	{"encourage","격려하다"}, {"express","표현하다"}, {"respond","대답하다"}, {"limit","한계"}, {"participate","참여하다"}, {"involve","관련시키다"},{"seek","구하다"}, {"reveal","폭로하다"}, {"evaluate","평가하다"}, {"double","이중의"}, {"acquire","습득하다"}, {"propose", "제안하다"}, {"merge","합병하다"}, {"intend","의도하다"}, {"inform","알리다"}, {"exceed","초과하다"}, {"authorize","인가하다"}, {"comply","준수하다"}, {"interrupt","방해하다"}, {"divide","나누다"}, {"generate","발생시키다"}, {"withdraw","취소하다"}, {"entitle","자격을주다"}, {"relieve","완화하다"}, {"compromise","타협"}, {"decide","결정하다"}, {"resume","이력서"}, {"outline","개요"}, {"focus","초점"}, {"reduce","줄이다"}, {"terminate","종결시키다"}, {"present","현재"}, {"convey","전하다"}, {"duplicate","사본"}, {"interact","상호작용하다"}, {"disclose","드러내다"}, {"diversify","다양화하다"}, {"compile","편찬하다"}, {"endorse","지지하다"}, {"verify","입증하다"}, {"impose","강요하다"}, {"liquidate","청산하다"}, {"lure","매력"}, {"transmit","보내다"}, {"commemorate","기념하다"}, {"acquaint","알게하다"}, {"deliberate","고의의"}, {"convene","소집하다"} };

Words word_days13[50] = {
	{"reserve","비축량"}, {"parthner","상대"}, {"determine","결정하다"}, {"examine","조사하다"}, {"handle","다루다"}, {"coordinate","조정하다"}, {"maintain","유지하다"}, {"ensure","반드시~하게하다"}, {"avoid","피하다"}, {"consist","~로구성되다"}, {"follow","따르다"}, {"enforce","시행하다"}, {"establish","확립하다"}, {"refrain","후렴"}, {"cause","원인"}, {"enroll","등록하다"}, {"investigate","연구하다"}, {"resign","사직하다"}, {"occur","발생하다"}, {"succeed","~에성공하다"}, {"assume","가정하다"}, {"emerge","나타나다"}, {"observe","관찰하다"}, {"expose","노출하다"}, {"restrict","제한하다"}, {"finalize","완료하다"}, {"argue","논쟁하다"}, {"forward","앞쪽으로"}, {"insert","덧붙이다"}, {"speculate","추측하다"}, {"qualify","자격을주다"}, {"surpass","능가하다"}, {"interfere","간섭하다"}, {"refer","언급하다"}, {"rely","의자하다"}, {"disregard","무시하다"}, {"object","물건"}, {"summarize","요약하다"}, {"waive","포기하다"}, {"overhaul","정비하다"}, {"facilitate","촉진하다"}, {"yield","산출량"}, {"revert","되돌아가다"}, {"relinquish","포기하다"}, {"strive","노력하다"}, {"affix","붙이다"}, {"integrate","통합하다"}, {"solidify","확고히하다"}, {"encompass","포함하다"}, {"institute","기관"} };

Words word_days14[50] = {
	{"reschedule","조정하다"},
	{"separate","분리하다"},
	{"exhibit","전시하다"},
	{"compare","비교하다"},
	{"remain","남은 것"},
	{"allow","허용하다"},
	{"oversee","감독하다"},
	{"announce","발표하다"},
	{"meet","만족하다"},
	{"instruct","지시하다"},
	{"broaden","넓히다"},
	{"book","예약하다"},
	{"admit","입학을허가하다"},
	{"notify","통보하다"},
	{"represent","대표하다"},
	{"adviseas","충고하다"},
	{"expire","만기가되다"},
	{"depart","출발하다"},
	{"appoint","임명하다"},
	{"resolve","해결하다"},
	{"equip","장비를갖추다"},
	{"remove","제거하다"},
	{"target","목표"},
	{"appeal","매력"},
	{"adhere","고수하다"},
	{"conserve","보존하다"},
	{"eliminate","제거하다"},
	{"cooperate","협력하다"},
	{"encounter","만남"},
	{"provide","제공하다"},
	{"contribute","기여하다"},
	{"result","결과"},
	{"utilize","활용하다"},
	{"prolong","연장하다"},
	{"anticipate","예상하다"},
	{"combine","결합하다"},
	{"settle","해결하다"},
	{"attribute","속성"},
	{"emphasize","강조하다"},
	{"patronize","후원하다"},
	{"redeem","보완하다"},
	{"abolish","폐지하다"},
	{"dispose","배치하다"},
	{"amend","개정하다"},
	{"commence","출시하다"},
	{"conceive","임신하다"},
	{"activate","활성화하다"},
	{"thrive","번영하다"},
	{"assess","평가하다"},
	{"complemnet","보완하다"} };

Words word_days15[50] = {
	{"applicant","신청자"}, {"opportunity","기회"}, {"shipment","배송"}, {"procedure","절차"}, {"condition","상태"}, {"performance","공연"}, {"asset","자산"}, {"rating","순위"}, {"equipment","장비"}, {"restraint","규제"}, {"dispute","논쟁"}, {"income","수입"}, {"compensation","보상"}, {"evidence","증거"}, {"duty","의무"}, {"renewal","재개발"}, {"gain","증가"}, {"participation","참여"}, {"supervision","감독"}, {"refund","환불금"}, {"view","전망"}, {"consent","허락"}, {"location","위치"}, {"expertise","전문지식"}, {"majority","대다수"}, {"recommendation","추천"}, {"inquiry","질문"}, {"flaw","결함"}, {"satisfaction","만족"}, {"pollution","오염"}, {"inspection","점검"}, {"aim","목표"}, {"constraint","제약"}, {"material","재료"}, {"conservation","보존"}, {"headquarters","본사"}, {"vendor","판매 회사"}, {"analysis","분석"}, {"oversight","관리"}, {"attire","의복"}, {"transaction","거래"}, {"substitute","대리인"}, {"insight","통찰력"}, {"proficiency","숙달"}, {"delegate","대표"}, {"succession","연속"}, {"fluctuation","변동"}, {"transit","수송"}, {"amendment","개정"}, {"subsidiary","부수적인"} };

Words word_days16[50] = {
	{"request","부탁"}, {"agenda","안건"}, {"production","생산"}, {"revenue","수익"}, {"receipt","영수증"}, {"entrance","입구"}, {"notice","주의"}, {"processing","가공"}, {"destination","목적지"}, {"access","접근"}, {"quarter","4분의 1"}, {"safety","안전"}, {"solution","해결책"}, {"resource","자원"}, {"observation","관찰"}, {"coworker","동료"}, {"ability","능력"}, {"extension","연장"}, {"congestion","혼잡"}, {"productivity","생산성"}, {"achievement","업적"}, {"description","묘사"}, {"suggestion","제안"}, {"responsibility","책임"}, {"consumption","소모"}, {"preference","선호"}, {"decision","결정"}, {"registration","등록"}, {"ceremony","의식"}, {"growth","성장"}, {"outcome","결과"}, {"permission","허가"}, {"phrase","구"}, {"relocation","재배치"}, {"setting","장소"}, {"investment","투자"}, {"convenience","편의"}, {"environment","환경"}, {"surplus","여분"}, {"initiative","주도권"}, {"proceeds","수익금"}, {"diagnosis","진단"}, {"audit","회계감사"}, {"appraisal","평가"}, {"perspective","관점"}, {"bid","입찰하다"}, {"commission","위원회"}, {"abstract","추상화"}, {"means","수단"}, {"privilege","특권"} };