# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-10 (first run)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA — the trader's sole current holding, and (2) TD SYNNEX (SNX) — the #1 pick from analysts/gs-stock-screener.md's 2026-07-10 report.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | ~$210 | ~$151 (WACC 11%, g 3%) | **OVERVALUED — ~28% downside to DCF fair value.** Current price only clears the DCF grid at the most aggressive corner (WACC 9%, g 4% → $235). Priced for flawless execution of consensus hyper-growth. |
| **SNX** | ~$250 (see price caveat below) | ~$275 (WACC 10%, g 2.5%) | **MODESTLY UNDERVALUED to roughly fairly valued — ~+10% to DCF fair value**, well short of GS's $340 bull case / $333.55 Street consensus PT. The Hyve AI-infra re-rate thesis has real support, but I'm not finding the "screaming discount" GS is pricing in once realistic distribution-margin economics are applied to the DCF. |

**Bottom line for the trader:** the model does NOT support adding to NVDA at current levels — it's the most expensive name in the portfolio on a DCF basis and the position is a hold-for-other-reasons (existing cost basis, small size), not a valuation buy. SNX is a more defensible entry than chasing NVDA higher, but size it knowing the DCF edge is single-digit-to-low-double-digit %, not the 30%+ implied by GS's headline framing.

---

## 1. NVIDIA (NVDA)

### Snapshot
- Current price: ~$210 (portfolio mark 2026-07-10 ~15:36 ET: $209.88)
- Shares outstanding: ~24.22B
- Market cap: ~$5.08T
- FY2026 (ended ~Jan 2026) actuals: revenue $215.9B (+65.5% YoY), operating margin 60.4%, net margin 55.6%
- FY2027 Q1 actual (reported ~May 2026): revenue $81.6B (+85% YoY), FCF $48.6B in the quarter (~59.6% FCF margin)
- FY2027 Q2 guidance: revenue $91.0B ±2%, gross margin mid-70%s
- Balance sheet: ~$50B cash & marketable securities; debt raised to ~$33.5B after a recent $25B bond issuance (was ~$8.5B) → net cash ~$16B, down sharply from prior quarters as NVIDIA debt-funds capex/supply-chain buildout and buybacks

### 5-year revenue projection
| FY | Revenue ($B) | YoY growth | Basis |
|---|---|---|---|
| FY2027E | $380 | +76% | Midpoint of Street consensus range ($366.8B–$391.3B); H1 already ~$172.6B (Q1 actual + Q2 guide midpoint) |
| FY2028E | $494 | +30% | Growth decelerates sharply as the FY26→FY27 step-change (Blackwell/Rubin ramp) laps |
| FY2029E | $583 | +18% | AI infra capex growth normalizes toward high-teens |
| FY2030E | $653 | +12% | Data center TAM growth continues but market matures, competitive share erosion begins |
| FY2031E | $705 | +8% | Approaching a more GDP-plus-AI-capex terminal growth profile |

### Operating margin / FCF margin
Current FCF margin (Q1 FY27 actual) is ~60%, likely elevated vs. a full-year average given capex timing. I model full-year FCF margin starting at 56% and compressing to 48% by FY2031 as: (a) capex intensity rises (NVIDIA is now debt-funding fab/packaging capacity, not just self-funding from cash), (b) gross margin faces gradual pressure from a richer mix of lower-margin systems/rack-scale sales, and (c) competitive response (Meta's in-house AI chip from Sept 2026, custom ASICs at Google/Amazon) caps pricing power at the margin.

| FY | FCF margin | FCF ($B) |
|---|---|---|
| FY2027E | 56% | $212.8 |
| FY2028E | 54% | $266.8 |
| FY2029E | 52% | $303.2 |
| FY2030E | 50% | $326.5 |
| FY2031E | 48% | $338.4 |

### WACC
- Risk-free rate (10Y UST, 2026-07-10): 4.54%
- Beta: ~1.7 (high-beta megacap, AI-cycle concentration risk)
- Equity risk premium: ~4.6%
- Cost of equity = 4.54% + 1.7 × 4.6% ≈ **12.3%**
- Debt is now a more meaningful ~0.7% of enterprise value even after the bond raise — negligible effect on blended WACC
- **WACC range used: 9%–13%, base case 11%**

### Sensitivity table — fair value per share

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Net cash of ~$16B added to enterprise value; 24.22B shares outstanding.

### DCF vs. market price
Base case ($150.6) implies **~28% downside** from the current $210 price. Even the most bullish cell on the grid (9% WACC / 4% terminal growth = $235.2) implies only modest upside — and that cell requires both a below-market cost of capital assumption AND a 4% perpetual growth rate for a company already at $216B in revenue, which is aggressive on its face. In 12 of 15 grid cells, NVDA is overvalued at $210.

### Verdict: **OVERVALUED**
The market is pricing NVDA for continued 70%+ near-term growth AND minimal margin compression AND a low discount rate simultaneously. Any one of those assumptions breaking pushes fair value further below spot.

### Key assumptions that could break this model
- **Upside break**: if FCF margin holds near the current 56-60% (rather than compressing to 48%) through the projection — i.e., competitive/pricing pressure doesn't materialize as fast as I've modeled — base case fair value moves toward the $180-200 zone, closing most of the gap.
- **Downside break**: China data-center exposure is already excluded from guidance per management, but any negative surprise on export policy, a Blackwell/Rubin execution slip (the Kyber rack system for Rubin Ultra has already reportedly slipped to 2028), or a memory/HBM supply bottleneck (ironically, benefiting SK Hynix/Micron at NVIDIA's expense on system economics) would pressure the top end of my revenue path.
- **Debt-funded capex is a new variable**: the $25B bond raise is a regime change from NVIDIA's historically balance-sheet-light, self-funded model — worth re-checking next run whether this becomes a recurring pattern (more debt = higher WACC risk if leverage keeps climbing) or a one-time supply-chain prepayment.

---

## 2. TD SYNNEX (SNX)

### Snapshot
- Current price: **data conflict this run** — sources ranged from $237 (Robinhood, 7/7) to $238.92 (TradingView) to $254.91 (Investing.com) to an outlier $293.65 (Yahoo, likely stale/wrong). MarketBeat's stated 12-month PT of $333.55 (+33.34% from "latest price") backs out an implied spot of ~$250.10, which I'm using as the working current price. **Flagging this as a data-quality gap — verify live quote via Robinhood before sizing any entry.**
- Shares outstanding: ~81M
- Market cap: ~$20.25B at $250
- TTM revenue: $65.14B; TTM FCF: $1.25B (FCF margin ~1.9% — typical thin-margin IT distributor economics)
- Net debt: ~$3.6B ($1.56B cash vs. $5.16B debt)
- FY2026 Q2 actual: revenue $19.57B (record quarter, beat consensus by 16.2%); Hyve (AI infra) segment gross billings +117% YoY to $5.5B
- FY2026 Q3 guidance: revenue ~$18.6B (+19% YoY), non-GAAP EPS ~$4.50
- FY2026 full-year non-GAAP EPS consensus: $17.18

### 5-year revenue projection
Base year FY2026E revenue ~$75B (run-rate off Q2 actual $19.57B + Q3 guide $18.6B, ~+15% over TTM $65.1B).

| FY | Revenue ($B) | YoY growth | Basis |
|---|---|---|---|
| FY2027E | $84.0 | +12% | Hyve ramp continues but decelerates off the 117% YoY base; core distribution grows low-single-digits |
| FY2028E | $90.7 | +8% | Hyperscaler AI infra program wins (5 US hyperscalers per Q2 call) mature into steadier-state volume |
| FY2029E | $96.2 | +6% | Growth converges toward IT distribution's historical mid-single-digit trend as Hyve's YoY comps normalize |
| FY2030E | $101.0 | +5% | — |
| FY2031E | $105.0 | +4% | Approaching terminal growth |

### Margin / FCF
Distribution businesses run on thin, capital-light-ish but working-capital-sensitive margins. I model gradual FCF margin expansion (1.9% → 2.1%) as the higher-value Hyve AI-infra mix grows as a share of revenue, but I am **not** underwriting a structural re-rate to a "hardware margin" business — that's a bull-case scenario, not my base case.

| FY | FCF margin | FCF ($B) |
|---|---|---|
| FY2027E | 1.90% | $1.596 |
| FY2028E | 1.95% | $1.769 |
| FY2029E | 2.00% | $1.924 |
| FY2030E | 2.05% | $2.071 |
| FY2031E | 2.10% | $2.205 |

### WACC
- Risk-free rate: 4.54%
- Beta: ~1.2 (distributor with real cyclicality, lower than a pure-play chip name)
- Cost of equity = 4.54% + 1.2 × 4.6% ≈ 10.06%
- Cost of debt: ~5.5% pretax → ~4.35% after-tax (21% rate)
- Capital weights: E/V ≈ 80%, D/V ≈ 20% (market cap $20.25B, debt $5.16B)
- CAPM/WACC formula output ≈ **8.9%**, but I'm using a **conservative tilt to 9-10% base case** given thin distribution margins and real cyclical/leverage risk that beta alone may understate
- **WACC range used: 8%–12%, base case 10%**

### Sensitivity table — fair value per share

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 8% | $338.0 | $394.0 | $474.8 |
| 9% | $285.6 | $325.2 | $379.0 |
| **10% (base)** | $245.6 | **$274.7** | $312.8 |
| 11% | $214.1 | $236.2 | $264.3 |
| 12% | $188.4 | $205.8 | $227.2 |

Net debt of ~$3.6B subtracted from enterprise value; 81M shares outstanding.

### DCF vs. market price
Base case ($274.7) implies **~+10% upside** from the working current price of ~$250. This is real but modest — nowhere near GS's $340 bull case (+36%) or the Street's $333.55 consensus PT (+33%). The DCF grid is **highly sensitive to the WACC/growth spread** at the low-WACC end (8% row swings from $338 to $475 across the growth range) — that's a red flag that the low end of my WACC range is producing terminal-value-dominated, low-confidence outputs, not a real signal. I'd weight the 10-11% WACC rows as the more defensible read.

### Verdict: **MODESTLY UNDERVALUED (roughly fair value, not a screaming discount)**
GS's screener thesis — cheap multiple + Hyve inflecting — is directionally right, but the DCF doesn't support the magnitude of their bull case once you apply realistic, unglamorous distribution-business margins to the AI-infra growth. This is exactly the kind of gap I'm here to flag: the *business* is doing well, but "doing well" and "34% undervalued" are different claims, and the current price already captures a good chunk of the Hyve re-rate.

### Key assumptions that could break this model
- **Upside break**: if Hyve mix shift genuinely re-rates blended company margins faster than I've modeled (i.e., toward a systems-integrator/OEM margin profile rather than staying a distributor with a fast-growing appendage), fair value moves meaningfully toward GS's $340 bull case. Watch Hyve segment margin disclosure specifically, not just revenue growth, in the next print.
- **Downside break**: the current price itself is unconfirmed this run (three-way data conflict, $237-$293) — if actual spot is closer to $255-260 rather than $250, the "undervalued" call weakens toward "fairly valued." Also, distribution businesses carry working-capital and channel-inventory risk that a revenue-growth narrative can obscure — a channel inventory correction or a hyperscaler program loss (concentration risk, only 5 customers named) would hit FCF disproportionately given the thin margin base.
- **New US listing dynamics**: SK Hynix's Nasdaq debut (per GS's report, same day) is a direct competitive/read-through risk to Micron and indirectly to AI-infra hardware economics broadly — not SNX-specific, but worth tracking for sector-wide multiple compression.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-10)
GS ranks SNX #1 with a bull case of $340 and an entry zone of $220-235. My DCF base case ($274.7) sits between GS's current price framing and their bull case — supportive of SNX as a reasonable idea, but I'd frame the risk/reward as "modest, credible edge," not "screaming discount." If the trader enters SNX, GS's suggested entry zone ($220-235) would meaningfully improve the margin of safety versus buying at ~$250-255 spot.

No JPM earnings-quality or BW risk-assessment reports exist yet this cycle to cross-check further (both first-run pending as of this report).

## Explicit read on trader's NVDA hold
The DCF does not support adding to NVDA at ~$210. It also doesn't scream "sell" on its own — a modest existing position (currently ~$5 notional) bought at $201.40 avg cost isn't worth trading out of on valuation grounds alone given the trader's stated "don't trade without a fresh catalyst" discipline, and DCF overvaluation isn't a fresh catalyst on its own. But if the trader is considering **sizing up** NVDA specifically (vs. diversifying into a new name), this model is a clear vote against that, on valuation grounds independent of the momentum/entry-timing considerations GS and the trader's own strategy log have already flagged.
