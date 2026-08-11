# BR Portfolio Builder — Investment Policy Report
**Date: 2026-08-11 (Tuesday), ~16:41 ET — eighth run of the day, following the close-of-log 15:37 ET check-in**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-08-10 ~16:17 ET. Portfolio figures below are derived from state.md's freshest Robinhood-verified `get_portfolio` read (8/11 ~15:37 ET, seventh run of the day) plus BW's 8/11 ~14:41 ET equity-basis snapshot for cross-checking. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy

**NVDA's underweight is still the single largest live gap on the book — now the fourth consecutive report logging the same fact, and still not a buy signal.**

| | Gap (pp of pool) |
|---|---|
| NVDA | **−4.28pp UNDER** (10.72% actual vs. 15% target) |
| VTI | +2.64pp over (32.64% vs. 30%) |
| VXUS | +1.58pp over (26.58% vs. 25%) |
| OMCL | −2.25pp under (7.75% vs. 10%) |
| XLE | +0.43pp over (10.43% vs. 10%) — essentially on target |
| Cash | +1.88pp over (11.88% vs. 10%) |

Today's tape was quiet and mixed — NVDA +0.25% at the last check-in, essentially flat — so unlike Monday there's no fresh "red day removes the chase objection" argument to make; the gap is simply sitting where it's sat for a week, drifting with the other sleeves' relative growth rather than any deliberate underweight. **Still monitor-only, rule 1 applies cleanly**: no fresh catalyst, no trade.

**The genuinely new information this cycle isn't a portfolio number — it's a rate-market data point none of today's other reports have surfaced yet.** Fresh WebSearch this run on tomorrow's (8/12, 8:30 ET) CPI print finds that futures-implied odds of a September rate hike have fallen to **~44%, down from ~67% a week earlier** — a real easing in market-priced hawkishness that sits alongside, not instead of, the 10-year's flat 4.73% level BW/GS have both logged today. The two data points tell a slightly different story than "still waiting, nothing new": the level hasn't moved, but the market's own read on where the level is headed after tomorrow has gotten less anxious. This doesn't change rule 6a's trigger status (unfired, unchanged) but it's a genuine new input worth flagging into tomorrow's post-CPI run — see §8.

No position currently breaches the book's 5pp single-position pool-basis drift trigger, the 25%-of-equity NVDA+OMCL combined trigger, or the 15%-of-equity individual satellite triggers on OMCL/XLE (§5).

---

## 1. Recommended allocation vs. current book

Trading-book value (per state.md's 8/11 ~15:37 ET Robinhood-verified read): **pool ≈ $50.5244** = equity $44.5244 + deployable cash $6.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below. **All percentages in this report are % of pool unless explicitly marked "% of equity."**)

| Sleeve | Ticker | Role | Target % (of pool) | Current % (of pool) | Current $ (approx) | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 32.64% | $16.49 | +2.64pp over (inside drift band) |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 26.58% | $13.43 | +1.58pp over (inside band) |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20% of equity) | 10.72% | $5.42 | **−4.28pp UNDER — largest gap on the book, see TOP** |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 7.75% | $3.92 | −2.25pp under (three straight down sessions per BW, reversing its six-session rally) |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.43% | $5.27 | +0.43pp — essentially on target |
| Cash | — | Dry powder / event-window buffer | 10% | 11.88% | $6.00 | +1.88pp over |
| **Total** | | | **100%** | **100%** | **~$50.52** | |

**Core / Satellite / Cash roll-up**: Core 55% target vs. **59.22% actual (+4.22pp OVER)**; Satellite 35% target vs. **28.90% actual (−6.10pp UNDER)**; Cash 10% target vs. **11.88% actual (+1.88pp over)**. Same structural imbalance flagged for three straight weeks now — too much core, too little satellite — essentially flat vs. yesterday's +4.26pp/−6.12pp/+1.87pp read. The binding constraint remains rule-6 gate clearance (GEHC/IONQ/PTCT), not cash or conviction — see §7.

---

## 2. Core vs. satellite discipline — status check

- **Core (VTI + VXUS, target 55% of pool)**: both legs comfortably inside their 5pp drift bands, no trigger pressure. Combined core is +4.22pp over target — not recommending a second trim off the back of the 8/7 action; one disciplined move per cycle, not continuous fine-tuning, unless a trigger actually fires.
- **Satellite (NVDA + OMCL + XLE, target 35% of pool)**: still 6.10pp under target, essentially unchanged for a week. NVDA's gap is the headline (monitor-only, see TOP). OMCL has now reversed into three straight down sessions per BW's afternoon read — its gap is widening back out slightly after narrowing on the prior rally, still with zero identified company catalyst either direction (a price-drift artifact both ways, not a decision point per contingency-plan rule 1). XLE sits essentially on target (+0.43pp), the one satellite that's actually closed its gap this week, entirely via the standing Hormuz/oil hedge working as designed — not a trim or add signal.
- **Cash (target 10%)**: 11.88% of pool, above target for a fourth consecutive reporting cycle. Genuine dry powder, not a stuck floor — the constraint is the closed rule-6 gates on GEHC/IONQ/PTCT, not a shortage of capital.

## 3. Expected annual return range (historical basis)

| Holding | Basis | Expected range (long-run, annualized) |
|---|---|---|
| VTI | US total-market index, ~97-year S&P-proxy history | ~9-11% nominal. 10-year Treasury sits at **4.73%** (flat across all six of today's checks per BW/GS), still below rule 6a's 4.75% two-close threshold; tomorrow's CPI print is the near-term test — see §8 for a new market-pricing angle on that print |
| VXUS | Developed + EM ex-US index | ~6-9% nominal; same rate backdrop as VTI, plus the structural AI-concentration-diversifier case reaffirmed again this cycle (see §8) |
| NVDA | Single-name, AI/semis hypergrowth — MS's fair value (~$150.6, model unchanged) | Historically 25-40%+ CAGR over the past decade; not a sustainable forward baseline. MS's downside gap sits at **~31.6%** (price-move effect only, model unchanged since 7/24). August 26 print (15 days out per JPM) is the next real catalyst — JPM's brief recommends WAIT through the print, no pre-earnings add or trim |
| OMCL | Small/mid-cap healthcare-tech, high earnings-day beta | ~8-15% long-run. MS's model-unchanged fair value ($53.89) implies **~43.6%** upside at today's price (~$36.99), still the widest discount on the book — the gap widened slightly today as the rally reversed, still purely a price effect, not new fundamentals |
| XLE | Energy sector basket, oil-cycle-driven | ~5-9% long-run with high cyclical variance. MS's oil-adjusted composite gap **~15.6%** overvalued this cycle, and for the first time in three sessions MS flags the underlying data (oil, XOM, CVX, XLE) as internally consistent rather than contradictory — a firmer read than the prior two cycles. Do-not-add stance unaffected |

**Blended portfolio expectation at current weights**: roughly **8-12% annualized** over a full market cycle — unchanged. Today was a genuinely quiet, low-conviction, pre-CPI session per BW's afternoon read — no single dominant theme, the market visibly waiting on tomorrow's print rather than trading a narrative.

## 4. Expected maximum drawdown in a bad year

Per BW's recurring recession stress test (methodology unchanged for weeks):

- **Blended equity-sleeve estimate: ~-34%**, applied to the current $44.52 equity sleeve implies roughly **-$15.14**, bringing account total value to **~$85.38, an approximate -15.1% whole-account drawdown** — cushioned by the ~54% total-cash allocation (of which $50 is untouched reserve). This models a *demand*-driven recession specifically, where XLE stops hedging and starts adding to the drawdown. BW's own correlation work today found NVDA and XLE **decoupled** again (-0.42% vs. +1.09%), a mild positive counter-example to Monday's one-off co-move — the hedge relationship isn't showing signs of breaking down.
- **Per-position estimates (BW, unchanged)**: NVDA -45% to -55%; OMCL -35% to -45% (already -21.3% unrealized, thin-book); VTI -30% to -35%; VXUS -25% to -30% (unhedged FX); **XLE -30% to -45% in a demand recession, but could instead rally in a supply/geopolitical-driven one.**
- **Rate-shock channel**: Rule 6a remains untested — 10yr flat at 4.73% all day, still short of the 4.75% two-consecutive-close threshold. Tomorrow's CPI print is the live test.

**Policy guidance, restated**: the $50 reserve remains the only hard floor on total-account damage in any scenario. Half-size satellite-entry discipline on OMCL and XLE continues to cap even an adverse narrative reversal to a small dollar impact at this account's size.

## 5. Rebalancing schedule and trigger rules

1. **Calendar cadence**: standing bi-weekly allocation check plus any trigger-fired reviews below — unchanged.
2. **Single-position drift trigger** (pool-basis, ±5pp, proven bidirectional): **no position currently breaches this** — VTI +2.64pp, VXUS +1.58pp, NVDA -4.28pp, OMCL -2.25pp, XLE +0.43pp all sit comfortably inside the band.
3. **Satellite concentration trigger, NVDA** (unchanged): crossing ~18-20% of equity forces a mandatory trim review. Currently ~12.16% of equity — comfortable buffer.
4. **NVDA+OMCL combined trigger** (adopted 8/10 ~11:38 ET): crossing 25% of equity forces a joint review. Currently ~20.95% of equity per BW's 14:41 ET read, ~4.05pp buffer, essentially flat vs. yesterday.
5. **Satellite concentration trigger, OMCL/XLE** (adopted last report, 8/10 ~16:17 ET, resolving BW's twice-repeated ask): crossing 15% of equity individually forces a mandatory trim review. **Current readings: XLE ~11.83% of equity (~3.2pp buffer); OMCL ~8.79% of equity (~6.2pp buffer).** Neither close to firing. One cycle of live operation with no drama — the mechanism is doing its job of not needing to be invoked.
6. **Falsifiable-trigger discipline** (unchanged): no other open time-boxed trigger is currently active on any holding.
7. **Rule 6a (rate-shock trigger)**: unchanged, unfired. Current status: 10yr flat at 4.73% across every check today. **New this report**: tomorrow's CPI print carries a market-pricing wrinkle worth watching alongside the raw yield level — see §8.
8. **XLE hedge-symmetry note**: XLE closed the week essentially on-target (+0.43pp vs. its 10% pool target) for the first time in three weeks, purely via the standing hedge working as designed on today's oil/Hormuz tape while NVDA pulled back slightly — not a reason to add (no fresh catalyst) and not a reason to trim (a gain, thesis intact, §5.5 trigger nowhere close).

## 6. Tax efficiency strategy (taxable cash account)

- **Every position in this book is still short-term.** The oldest holding (NVDA, entered 7/9) is barely a month old. The only realized event to date remains the 8/7 $2.00 VTI trim (~$0.04-0.05 gain, immaterial).
- **Tax-loss harvesting readiness, updated**: OMCL's unrealized loss sits around **-21.3%** (per BW's live 8/11 read), still the book's largest unrealized loss by a wide margin, and widened slightly today as the three-session reversal continued. No harvesting action recommended — OMCL is a live, cross-vetting-blocked satellite with the widest DCF discount on the book, not an exit candidate; flagged for the record only.
- **Wash-sale discipline**: unchanged — if a satellite position is ever sold at a loss, no re-buy of the same ticker within 30 days. Not currently applicable.
- **Materiality caveat**: at ~$50.52 deployed, today's tax dollar impact is trivial regardless of action taken. The discipline exists for when the account scales.

## 7. Dollar-cost-averaging plan for redeploying profits

1. **Deployable cash is $6.00 (11.88% of pool)** — above the 10% target for a fourth consecutive reporting cycle. The constraint remains "no cleared gate," not "no cash."
2. **Standing next-dollar priority, unchanged from the last two reports (GS's own ranking, this desk agrees):**
   - **(a) GEHC, still the top ask.** Now nine-plus weeks rule-6-blocked with zero MS DCF or BW risk read started, despite three desks (GS, BR, and implicitly MS's own coverage-mandate silence) independently pointing at the same open gate. The CFO-transition caveat that had added a whisker of caution resolved cleanly over a week ago. This is the single cleanest, most process-only idea sitting on the desk and the natural first stop for the next MS/BW cycle that has bandwidth.
   - **(b) IONQ, second, still with the Wolfpack short-seller allegation and MS's stake-reduction-below-5%-threshold flag both live and unrebutted.** Not urgent; the bar for whoever eventually runs this cross-vet should stay elevated versus where it was before the allegation broke.
   - **(c) OMCL's sizing re-test, third.** Now an eighth-to-ninth week open on the standing post-transcript BW sign-off — not this desk's gate, but GS keeps logging fresh sell-side PT hikes (Barclays $58, Wells Fargo $40) this book still can't act on while it stays shut.
   - **(d) Core (VTI or VXUS) last.** Both at or modestly over target; no case for adding to an already-overweight core sleeve while satellite sits 6.10pp under target.
3. **Process-gap escalation, worth naming plainly**: this desk has now recommended the same (a)-(b)-(c)-(d) ordering for three consecutive reports without any of the three satellite gates (GEHC, IONQ, PTCT) actually clearing. Per the book's own rule 14 ("a repeated ask that never converts into a rule is noise, not caution"), the equivalent standard should apply here — restating an unchanged priority list a fourth time adds little. The concrete ask to MS/BW, stated once and not repeated again unless something changes: pick one of the three (GEHC is this desk's clear preference, cleanest thesis, fewest open caveats) and close the DCF/risk-read gate at the next run where either desk has capacity, rather than let all three roll forward together indefinitely.
4. **Cash floor**: holding above target remains appropriate while genuine ideas sit queued behind process, not capital.

## 8. Areas to consider from recent WEF / macro-policy discussion (fresh WebSearch this run)

- **New this cycle — a market-pricing nuance on tomorrow's CPI print that the raw yield level doesn't capture.** The 10-year has sat flat at 4.73% all day, which is the number every desk has been citing — but futures-implied odds of a September Fed hike have fallen to **~44%, down from ~67% a week earlier**. That's a real softening in how the market expects tomorrow's print to resolve, even though the spot yield hasn't moved yet. Practically: a hot CPI print tomorrow would be a bigger surprise (and plausibly a bigger yield reaction) against today's lowered odds than it would have been against last week's higher odds — worth the whole book weighting tomorrow's post-CPI read a bit more heavily than "just another data point," precisely because expectations have drifted dovish into it.
- **Concentration-risk theme continues to sharpen, now with a fresh BlackRock-specific angle.** This cycle's search surfaces BlackRock's own current framing directly: multifactor and equal-weight strategies are being adopted industry-wide specifically because "earnings growth is more concentrated than forecasted at the start of the year." BlackRock's own prescription is a "diversified diversifier" — alternatives and low-stock-correlation asset classes — noting only ~18% of advisor model portfolios currently hold any alternatives allocation (average moderate portfolio ~8%). This book's equities/ETFs-only mandate can't reach that specific lever, which is worth stating plainly rather than glossing over: XLE (real-asset/commodity-cycle exposure) and VXUS (regional diversification) are the two tools this account actually has access to, and both are already deployed near or at target. There is no unexploited diversification lever sitting idle here — the binding constraint is process (rule-6 gates), not an unused tool in the kit.
- **Rate story, restated with the new nuance from above folded in**: 10-year flat at 4.73%, still below rule 6a's threshold. Tomorrow's CPI print (8/12, 8:30 ET) is the dated catalyst — both the yield-level test (does it push toward/through 4.75%) and, per the new market-pricing data point, a genuine surprise-risk test given how far hike odds have already fallen this week.
- **Market backdrop, for context**: today was quiet and low-conviction across the book (BW: "genuinely uneventful afternoon... no single dominant macro story, the market visibly waiting on tomorrow's print"). A pause session, not a reason to revise any target weight.

---

## One-page Investment Policy Statement (for the trader to follow)

**Client**: Claude Robinhood Trader experiment. Capital: $50 base + accumulated profits, inside a ~$100 taxable cash account (the ~$50 beyond trading capital is untouchable reserve). Risk tolerance: aggressive. Horizon: short-to-medium, with an explicit goal of compounding into a long-running track record. Universe: equities/ETFs only, no options, fractional shares available.

**Target allocation** (of the ~$50.52 trading pool — all targets and gaps in this report are pool-basis unless marked otherwise): Core 55% (VTI 30% / VXUS 25%) — Satellite 35% (NVDA 15%, soft-capped at 18-20% of equity; OMCL 10%; XLE 10%) — Cash 10% (higher during live binary-event windows or an active Rule 6a rate-shock window).

**Standing rules** (see Strategy & theories in state.md for full detail, rules 1-14 plus 6a): no trade without a fresh catalyst *or without a pre-committed rule-based trigger firing*; never chase an extended move; diversified-basket buys are exempt from the single-name geopolitical veto; always verify price live via Robinhood before sizing; a DCF "sharply overvalued" call is a hard pass; new ideas need a full cross-vetting cycle before sizing; open theses get a falsifiable trigger with a hard time-box; look-through concentration matters more than headline allocation; Rule 6a (rate-shock pause, 10yr >4.75%/30yr >5.25% on two consecutive closes) — not in effect, 10yr flat at 4.73%, tomorrow's CPI is the live test; NVDA+OMCL combined concentration trigger at 25% of equity (currently ~20.95%, not fired); individual satellite concentration cap (18-20% of equity for NVDA, 15% of equity for OMCL/XLE) — XLE ~11.83%, OMCL ~8.79%, neither fired.

**Current live decision point**: **none requiring trade execution today.** No position breaches any drift or concentration trigger. NVDA's -4.28pp underweight is the book's largest gap but remains monitor-only — today's flat tape offers neither a chase objection nor a fresh catalyst. The one process item worth flagging plainly: GEHC/IONQ/PTCT's rule-6 gates have now sat open long enough that repeating the same priority order a fourth time adds little (§7.3) — the concrete ask to MS/BW is to close one, GEHC first, at the next run either desk has capacity, not to re-flag the list again.

**Review cadence**: bi-weekly standing allocation check, plus trigger-fired reviews on >5pp single-position drift (bidirectional), satellite concentration crossing 18-20% of equity for NVDA or 15% of equity for OMCL/XLE individually, 25% combined for NVDA+OMCL, any pre-committed time-box reaching its deadline, or Rule 6a firing.

---

## Cross-check with other analysts

- **BW (8/11, 10:45 ET and 14:41 ET)**: held risk grade at C- across both reports, confirmed NVDA/XLE decoupled again today (a positive counter-example to Monday's co-move), and flagged OMCL's third straight down session as price-only, no trim signal. This desk's read matches on all counts — a quiet, low-drama day that doesn't change any target weight.
- **GS (8/11, ~15:41 ET)**: held the board exactly as ranked earlier in the day — OMCL #1 for a tenth cycle, GEHC #2 (three desks now pointed at the same gate), PTCT #3 (ask now stale a full cycle). Flagged a CRWD/MU price-sourcing data-quality discrepancy for MS/BW to reconcile — noted, not this desk's mandate to resolve.
- **MS (8/11, ~10:40 ET)**: NVDA/OMCL price-only rolls, models unchanged; XLE's data-quality flag from 8/10 is resolved this cycle (oil, XOM, CVX, and XLE's own tape all now point the same direction) — this desk's read of XLE sitting on-target (§5.8) is consistent with MS's firmer do-not-add conviction this run.
- **JPM (8/11)**: NVDA and CRWD both now confirmed for the August 26 print (15 days out), WAIT recommended on both — no pre-earnings add or trim on NVDA, consistent with this report's own monitor-only stance on the NVDA underweight. Flags NVDA's CDS spread (record 82bps on 7/27) and the $250-350B OpenAI financing overhang as the two live risk threads to watch into the print, worth this desk's awareness even though neither is a sizing input today.

---

Sources:
- [The Aug. 12 Inflation Report Could Decide Whether Kevin Warsh Raises Rates in September (Yahoo Finance)](https://finance.yahoo.com/economy/policy/articles/aug-12-inflation-report-could-140522541.html)
- [US CPI Prep (12th August) (FinancialJuice)](https://features.financialjuice.com/2026/08/10/us-cpi-prep-12th-august-2/)
- [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield)
- [Investment Directions 2026 Outlook (iShares/BlackRock)](https://www.ishares.com/us/insights/inside-the-market/2026-market-outlook-investment-directions)
- [How BlackRock, world's largest asset manager, is fine-tuning market portfolios for 2026 (CNBC)](https://www.cnbc.com/2026/01/10/blackrock-investing-bull-market-portfolio-stocks.html)
- [2026 Spring Investment Directions (BlackRock)](https://www.blackrock.com/us/financial-professionals/insights/inside-the-market/investment-directions)
- Internal: trading-experiment/state.md (8/11 Balance history and Run notes through the 15:37 ET close, Strategy & theories rules 1-14/6a), analysts/bw-risk-assessment.md (8/11 ~14:41 ET), analysts/gs-stock-screener.md (8/11 ~15:41 ET), analysts/ms-dcf-valuation.md (8/11 ~10:40 ET), analysts/jpm-earnings-analyzer.md (8/11)
